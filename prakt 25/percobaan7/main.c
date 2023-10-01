main() {
 char *text_pointer = "Good morning!";
 for( ; *text_pointer != '\0'; ++text_pointer)
 {
    //printf("%c", *);
    printf("%p\n",text_pointer);
 }


 }
