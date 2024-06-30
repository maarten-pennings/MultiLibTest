@ECHO OFF
REM Create a link in the Arduino library directory, to a library in a repo

REM Create
mklink /D C:\Users\maarten\Documents\Arduino\libraries\mltLib1  C:\Repos\MultiLibTest\libraries\mltLib1
mklink /D C:\Users\maarten\Documents\Arduino\libraries\mltLib2  C:\Repos\MultiLibTest\libraries\mltLib2

REM Show
dir C:\Users\maarten\Documents\Arduino\libraries\mltLib*