Global Variables and Static Functions

//Why are global variables considered bad programming practice?
They are created oustide functions and stand alone
Accessible from all functions.
Possibly accessible across different source files.
Creates a mess! (High coupling.)
global variables. Instead, use parameters to pass data between functions! (This discussion is merely FYI.)

For variables, extern allows you to access global variables across files.

Can be unsafe - security reasons - can be accessed from anywhere
Only accessible from the file it is declared in

//Why would you never declare a static function in a header file?
 In a shared library, it could easily cause bugs because now part of your library 
 is embedded in the library's callers, so version mismatches could easily happen.

 considered as a public interface - can have access to that function