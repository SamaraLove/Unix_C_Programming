Macros
You have been asked to write the code for a progress bar for downloading a file. The
progress bar will incorporate various statistics about download progress and display
them.
You have access to the following information:
 the current time (measured in seconds elapsed since 1970);
 the download start time (also in seconds elapsed since 1970);
 the number of bytes downloaded; and
 the total file size in bytes.
Given this, write macro definitions for the following:
(a) ELAPSED_TIME(time, startTime)
— the download time so far (in seconds).
(b) PERCENT_COMPLETE(bytes, totalBytes)
— the percentage complete (0–100%).
(c) DOWNLOAD_SPEED(time, startTime, bytes)
— the current download speed (in bytes per second).
(d) TOTAL_TIME(time, startTime, bytes, totalBytes)
— the estimated total time (in seconds).
(e) REMAINING_TIME(time, startTime, bytes, totalBytes)
— the estimated remaining time (in seconds).
Save these macros in a header file called download.h. Then, obtain a copy of
download.c. Compile and run it — it will help test your macro definitions.