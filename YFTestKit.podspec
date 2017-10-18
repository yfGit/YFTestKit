


Pod::Spec.new do |spec|
spec.name             = 'YFTestKit'
spec.version          = '1.0'
spec.summary          = 'Guide:'
spec.description      = <<-DESC
                        Guide for private pods
                        DESC
spec.homepage         = 'https://github.com/yfGit/'
spec.license          = { :type => 'MIT', :file => 'LICENSE' }
spec.author           = { 'YFTestKit' => 'yf_personal@163.com' }
spec.source           = { :git => 'https://github.com/yfGit/YFTestKit.git', :tag => spec.version.to_s }
spec.ios.deployment_target = '8.0'
spec.source_files = 'YFTestKit/Classes/*.{h,m}'

end
