#TNStoreManager

TNStoreManager is a wrapper class for CoreData.

##How To Use

- Make instance using -initWithDelegate:objectModel:localStoreURL:ubiquityStoreURL:contentName:.
- Get NSManagedObjectContext in delegate using -manager:createdObjectContext:.
- If you use iCloud Sync, set YES at useUbiquityStore and define priority store using -manager:definePriorityStore:.

##Pod
pod 'TNStoreManager', :git => 'https://github.com/tarunon/TNStoreManager.git'
