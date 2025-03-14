# Path of the Furon Recomp
 recomp aimed to recompile destroy all humans path of the furon


special thanks to @hedge-dev for xenonrecomp https://github.com/hedge-dev/XenonRecomp

look at the original project for info on things i dont really understand myself

If you want to your own files from xenonrecomp for the project 
----------------------------------------
1. install git - https://git-scm.com/

2. install visual studio community - https://visualstudio.microsoft.com/downloads/

3. during the install for visual studio community you'll want to install the desktop development with C++  and make sure C++ clang tools for windows is checked on the right side

4. open a cmd where you want to clone my fork of xenonrecomp (this will change when the original merges some pull requests to add the missing instructions, add simde, etc.) and do git clone https://github.com/masterspike52/XenonRecomp.git --recursive 

5. open visual studio and select open local folder and select where you cloned the repository

6. wait for visual studio to say cmake is done configuring and go to build > build all (if it doesnt appear for whatever reason just close visual studio, delete the vs and out folders in made in your repository, and try again)

7. now inside your cloned repository you should have a folder named out. go into it till you make it to the build itself (itll look the same as the cloned repository) and go into the xenonrecomp folder

8. create 3 folders - out, game, switch

9. download the contents of the switch tables and config toml files folder from this repository

10. place the config.toml in the same directory as xenonrecomp.exe and dah.toml inside of the switch folder you made

11. grab your path of the furon iso and run it through this https://digiex.net/threads/xbox-360-xiso-extract-best-an-easiest-xdg3-extraction-tool-with-gui-ftp.9711/ to dump your iso's contents(no i cannot provide you the iso, either dump it or find it somewhere, its not my cocnern how you get it) 

12. take the xex file that was dumped and place it in the game folder you made

13. at this point i recommend going back to the root of the whole repository you cloned and going into the xenonutils folder and copying the directory

14. go back to the built xenonrecomp folder, open a cmd there and do ./xenonrecomp config.toml insert directory you copied in step 13\ppc_context.h 

15. in the out folder you made it should now have over 600 .cpp files and 3 .h files which you will use to compile the game once its in a compilable state (this is where im floundering about)


Things that need to be done
--------------------------------
implement missing functions such as audio/video drivers and whatnot as well as make the game actually run 