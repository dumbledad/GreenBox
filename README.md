# GreenBox
Very simple test of writing a native iOS plugin for unity

Loosely following the instructions [here](http://stackoverflow.com/a/14885024/575530).

1. Make a simple Unity project (this one's called "IOSPluginTestUnity") and add a cube to the main scene.  
2. Build a Cocoa Touch Static Library in Xcode (this one's called "IOSPluginTest").  
3. Place the .a file that results from building the Xcode project into an Assets/Plugins/iOS directory in the Unity project.  
4. Write a script and attach it to the cude in the main scene. Use it to call the native iOS and set the colour of the cube depending on the result of the call.
5. Build & run the Unity project for iOS. This generates another Xcode project (this one's called "IOSPluginTestUnityXcode").  
6. Build, deploy, and run the project on the iPhone. I needed to fix the signing team first.  
