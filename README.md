#TNStoreManager

##使い方
CoreDataのマネージャークラス。  
AppDelegate等にTNStoreManagerDelegateを貼り、TNStoreManagerのインスタンスを作る。  
manager:createdObjectContext:にNSManagedObjectContextが降ってくるので後は良しなに。  
useUbiquityStoreでiCloudの利用を切り替える。初期化時はファイルの有無で判定。  
iCloud利用の切替時にコンフリクトする場合はローカルとiCloudの優先を選択。マージはしない。  
