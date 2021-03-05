  
# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{ 
   
    FILE *filePointer ; 
      
    
    char dataToBeWritten[50]  
        = "Soubhagya Paul student of RKMVCC"; 
  
    filePointer = fopen("test.c", "w") ; 
      
   
    if ( filePointer == NULL ) 
    { 
        printf( "test.c file failed to open." ) ; 
    } 
    else
    { 
          
        printf("The file is now opened.\n") ; 
          
        if ( strlen (  dataToBeWritten  ) > 0 ) 
        { 
              
       
            fputs(dataToBeWritten, filePointer) ;    
            fputs("\n", filePointer) ; 
        } 
        fclose(filePointer) ; 
          
        printf("Data successfully written in file test.c\n"); 
        printf("The file is now closed.") ; 
    } 
    return 0;         
} 
