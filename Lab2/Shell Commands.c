Shell Commands
//Construct bash commands to do the following:

//List all files in the current directory whose name contains “Ralph”;
//CRICOS Provide Code: 00301J Page 1 of 5
//UCP 120 Worksheet 2: Environments

//Examples
//? stands for any single character.
//* stands for any sequence of characters (including zero).
*.txt 			// any texts 
??.txt 			//any text files with two characters
??.* 			//any text files with any extension
*?.txt 			//any text file that has at least one character
*hello*world* 	//searches for hello*world

//Question
ls *Ralph* 		// ls list files, *  * expanded symbols}

	
 rm -r -i a.c // remove, r is recursive (goes into all the folders) i means to ask you a.c is the file to remove
				// -f means to force it, and not to ask
 cat > 22.c 	// creates a file called 22.cabs
				// control + D to go back to compiling
		 		

//List all files in the “codes” directory whose name consists of two digits, then a 
//dash, then any three characters;
ls codes/[0-9][0-9]-???

//Notes
//[A-Z]* all files starting with an upper-case letter.
//Therefore [0-9] will search for any number in the file
//[9] will search for the number 9 

ls ??[0-9].* 	//

//List all files that end with a vowel in all subdirectories that don’t end with a vowel;
//*[^a e i o u]/*[a e i o u] //star includes the dot, slash jumps to the subdirectory

//Create an alias for listing all .c files;
alias lsc ='ls*.c'

//Create an alias to turn the -Wall -ansi -pedantic switches on by default for gcc.
alias gcc='gcc-wall-ansi-pedantic'
// it will automatically do/perform  the ' ' 