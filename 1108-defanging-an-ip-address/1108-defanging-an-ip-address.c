

char * defangIPaddr(char * address){
    
    char * newaddress= (char *)malloc(30*sizeof(char));
    int a = 0, b = 0, c = 0, d = 0;
    
    sscanf(address,"%d.%d.%d.%d",&a ,&b ,&c ,&d);
    sprintf(newaddress,"%d[.]%d[.]%d[.]%d",a ,b ,c ,d);
    
    return newaddress;
    
}