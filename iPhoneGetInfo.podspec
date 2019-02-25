Pod::Spec.new do |s|

s.name         = "iPhoneGetInfo"
s.version      = "1.0"
s.summary      = "get iPhone Device info"
s.homepage     = "https://akashark.github.io/"
s.license          = { :type => "MIT", :file => "LICENSE" }
s.author       = { "Sharker" => "aaksharker@gmail.com" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/AkaShark/iPhoneGetInfo", :tag => "1.0" }
s.source_files = "iPhoneGetInfo/Classes/*"
s.requires_arc = true

# s.frameworks = "SomeFramework", "AnotherFramework"

end