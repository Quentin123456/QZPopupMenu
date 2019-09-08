#
# Be sure to run `pod lib lint QZPopupMenu.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'QZPopupMenu'
  s.version          = '1.0.0'
  s.summary          = 'It’s a tool that pops up menus.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
This is a menu tool that can pop up in two different ways,the list of pop-up functions is used to read text.
                       DESC

  s.homepage         = 'https://github.com/Quentin123456/QZPopupMenu'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Quentin123456' => 'quentinzang@outlook.com' }
  s.source           = { :git => 'https://github.com/Quentin123456/QZPopupMenu.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'QZPopupMenu/Classes/**/*'
  
  # s.resource_bundles = {
  #   'QZPopupMenu' => ['QZPopupMenu/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
