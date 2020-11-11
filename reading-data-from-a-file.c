 #include <stdio.h>
 #include <errno.h>
 #include <string.h>
 int main(){

 char name[20],surname[20], city[20];
 int born,i;
 double size;

 FILE *data;     // File handle is determined
 data = fopen("info.txt","r");     // The purpose is to "read" data from a file.

if(!data){     // Testing whether file has been opened

fprintf ( stderr, "Error opening file: %s\n", strerror(errno) );
exit(1);
 }else{     // If the file is opened successfully, ignore above and continue with "else"
 i=1;
 while(fscanf(data,"%s %s %d %s %lf", &name, &surname, &born, &city, &size)!= EOF){   // "fscanf" function is used to read data from a file
    printf("%-8d %-8s %-8s %-8d %-12s %.2lf\n",i,name,surname,born,city,size);
    i = i+1;
 }
}
fclose(data);     // Close the file.
return 0;
}
