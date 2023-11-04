int isCyclicRotation(string &p, string &q) 

{

    string res=p;

    int j = p.length()-1;

    do{

        string temp = "";

        temp = temp + res.substr(j) + res.substr(0,j);

        if(temp==q)
         return 1;

        res = temp;


    }while(res != p);

 

    return 0;

}
