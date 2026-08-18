class Solution {
public:
    int myAtoi(string s) {
      long long int sum=0;
        int sine=1;
        bool isnumber=false;
        int i=0;
        while(i<s.size()&&s[i]==' ') i++;

        if(s[i]=='+') 
    {sine=1;
     i++;
       }
          else if(s[i]=='-') {sine=-1;


        i++;}
        for( i; i<s.size(); i++)
        {
        
            if(s[i]>='0'&&s[i]<='9')
            {
                sum=sum*10+(s[i]-'0');
                if(sine*sum>INT_MAX) return INT_MAX;
                if(sine*sum<INT_MIN) return INT_MIN;
            }
            else
            {
break;
            }
        }
        return sum*sine;
    }
};