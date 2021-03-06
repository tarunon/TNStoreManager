//
//  UbiquityStoreManager.h
//  Libing
//
//  Created by tarunon on 2014/06/29.
//  Copyright (c) 2014年 tarunon. All rights reserved.
//

#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>

#endif


#import <CoreData/CoreData.h>

typedef enum : NSUInteger {
    TNStoreManagerPriorityStoreLocal,
    TNStoreManagerPriorityStoreUbiquity
} TNStoreManagerPriorityStore;

@protocol TNStoreManagerDelegate;

typedef void (^TNStoreManagerDefinePriorityBlock)(TNStoreManagerPriorityStore priorityStore);

@interface TNStoreManager : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectModel *_model;
    NSManagedObjectContext *_context;
    NSDictionary *_localStoreOptions;
    NSDictionary *_ubiquityStoreOptions;
    NSMutableDictionary *_migratedObjectIDs;
    NSURL *_localStoreURL;
    NSURL *_ubiquityStoreURL;
    NSInteger _mergeCount;
}

@property (nonatomic, weak) id<TNStoreManagerDelegate> delegate;
@property (nonatomic) BOOL useUbiquityStore;

- (instancetype)initWithDelegate:(id<TNStoreManagerDelegate>)delegate objectModel:(NSManagedObjectModel *)model localStoreURL:(NSURL *)localStoreURL ubiquityStoreURL:(NSURL *)ubiquityStoreURL contentName:(NSString *)contentName;
- (id)getOrInsertWithEntityName:(NSString *)entityName keyedValues:(NSDictionary *)keyedValues;
- (void)save;
- (void)didCrashWithException:(NSException *)exception;

@end

@protocol TNStoreManagerDelegate <NSObject>

@required
- (void)manager:(TNStoreManager *)manager createdObjectContext:(NSManagedObjectContext *)context;

@optional
- (void)manager:(TNStoreManager *)manager definePriorityStore:(TNStoreManagerDefinePriorityBlock)definePriorityStore;
- (void)manager:(TNStoreManager *)manager didFailLoadWithError:(NSError *)error;
- (void)manager:(TNStoreManager *)manager didFailSaveWithError:(NSError *)error;

@end
