char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0) 
    {
        return "";
    }
    char* pre=strs[0];
    int preLen=strlen(pre);
    for(int i = 1; i < strsSize; i++) 
    {
          int j = 0;
        while ((j<preLen)&&(strs[i][j]==pre[j]))
        {
            j++;
        }
        preLen=j;
        if (preLen==0) 
        {
            return "";
        }
    }
    pre[preLen] = '\0';
    return pre;
}
