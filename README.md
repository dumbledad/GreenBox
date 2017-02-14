# GreenBox
Very simple test of writing a native iOS plugin for unity

Loosely following the instructions [here](http://stackoverflow.com/a/14885024/575530).

1. Make a simple Unity project (this one's called "IOSPluginTestUnity") and add a cube to the main scene.  
2. Build a Cocoa Touch Static Library in Xcode (this one's called "IOSPluginTest").  
3. Place the .a file that results from building the Xcode project into an Assets/Plugins/iOS directory in the Unity project.  
4. Write a script and attach it to the cude in the main scene. Use it to call the native iOS and set the colour of the cube depending on the result of the call.
5. Build & run the Unity project for iOS. This generates another Xcode project (this one's called "IOSPluginTestUnityXcode").  
6. Build, deploy, and run the project on the iPhone. I needed to fix the signing team first. And later I needed to change the build target to > 8 (I went for 10.2).

The commit [afdf67](https://github.com/dumbledad/GreenBox/tree/afdf67c5f2af84e2d9e51a637641dd1f600a8cb7) contains just one simple call from the Unity C# script 
into the iOS native C++ code. 

Commit [c99815](https://github.com/dumbledad/GreenBox/tree/c998156626f1e0fe23ca80a4c0855ddd7f15dfbf) incudes a callback from the iOS native C++ code into the 
Unity C# script.

Then commit [32cea6](https://github.com/dumbledad/GreenBox/tree/32cea6e91f705d866d9ee9407029f2a1eaa28e8c) goes back to the simple call (without a callback). But 
the call from the Unity C# script into the iOS native C++ then calls further into an instance method on an Objective-C object.

The current version of the code adds a callback from the Objective-C back into the Unity C# script.

