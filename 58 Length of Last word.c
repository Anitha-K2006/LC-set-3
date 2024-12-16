int lengthOfLastWord(char* s) {
    int i=0,len=0,last=0;;
    while(s[i]!='\0')
    {
        if(s[i]==32)
        {
            if(len!=0)
            {
            last=len;
            }
            len=0;
        }
        else
        {
            len++;
        }
        i++;
    }
    if(len!=0)
    {
       last=len;
    }
    return last;
    
}
