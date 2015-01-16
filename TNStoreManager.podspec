#
#  Be sure to run `pod spec lint TNKeyValueObserveCenter.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = "TNStoreManager"
  s.version      = "0.0.2"
  s.summary      = "TNStoreManager is CoreData manager supported iCloud sync."
  s.homepage     = "https://github.com/tarunon/TNStoreManager"
  s.license      = { :type => "MIT", :file => "LICENSE.txt" }
  s.author             = { "tarunon" => "croissant9603@gmail.com" }
  s.ios.deployment_target = "7.0"
  s.osx.deployment_target = "10.9"
  s.source       = { :git => "https://github.com/tarunon/TNStoreManager.git", :tag => "0.0.2" }
  s.source_files  = "TNStoreManager", "TNStoreManager/*.{h,m}"
  s.requires_arc = true
end
