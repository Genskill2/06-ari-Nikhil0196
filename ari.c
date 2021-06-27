

string ari(string s)
{ 
   int characters=0;
   int words=0;
   int sentences=0;
   int ari;
   
   for(int i=0;i<strlen(s);i++)
   {  
      if(isalnum(s[i]))
      { characters++;  }
      
      if(s[i]==' ')
      { words++;       }
      
      if(s[i]=='.'||s[i]=='?'||s[i]=='!')
      { sentences++;   }
   } 
   
   float t=((4.71*(float)characters/words)+(0.5*(float)words/sentences)-21.43);
   
   ari=round(t);
   
   if(ari<t)
   ari++;
   
   switch(ari)
   {  
      case 1:
      {return "Kindergarten";
      break;}
      
      case 2:
      {return "First/Second Grade";
      break;}
      
      case 3:
      {return "Third Grade";
      break;}
      
      case 4:
      {return "Fourth Grade";
      break;}
      
      case 5:
      {return "Fifth Grade";
      break;}
      
      case 6:
      {return "Sixth Grade";
      break;}
      
      case 7:
      {return "Seventh Grade";
      break;}
      
      case 8:
      {return "Eighth Grade";
      break;}
      
      case 9:
      {return "Ninth Grade";
      break;}
      
      case 10:
      {return "Tenth Grade";
      break;}
      
      case 11:
      {return "Eleventh Grade";
      break;}
      
      case 12:
      {return "Twelfth Grade";
      break;}
      
      case 13:
      {return "College student";
      break;}
      
      case 14:
      {return "Professor";
      break;}
    }  
      
}     
      
