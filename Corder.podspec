Pod::Spec.new do |s|

    s.author = 'Corder Team'
    s.name = 'Corder'
    s.version = '1.0.10'
    s.requires_arc = true
    s.license = { :type => 'Copyright', :text => 'Copyright 2018 Corder' }
    s.homepage = 'https://www.corder.io/'
    s.summary = 'Analytics & Video sessions SDK for iOS'
    s.vendored_frameworks = 'Corder.framework'
    s.description = <<-DESC
                        Video analytics platform which provides in-depth analysis of your users' behavior, allowing you to deliver the ultimate app experience.
                    DESC
    s.platform = :ios, '8.0'
    s.ios.deployment_target = '8.0'
    s.screenshot = 'https://www.corder.io/content/corder-demo.gif'
    s.ios.spec.weak_frameworks = 'CoreGraphics', 'CoreVideo', 'QuartzCore'
    s.ios.dependency 'Firebase/Storage'
    s.ios.source_files = 'Corder.framework/Headers/Corder.h'
    s.source = { :git => 'https://github.com/kirillkudin/corder.git', :tag => 'v1.0.10'}
end
