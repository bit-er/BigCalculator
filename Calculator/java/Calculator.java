
package calculator;




public class Calculator {
            
            public static final Long m=100L;//1000000000000000000L;
            public static final byte n=2;//18;


    public static void main(String[] args) {

		String str1= "3454564435";
		String str2= "454364";
        System.out.println(Div(str1,str1));
              
    }
                
        
            
    
    
 
    
    
    
    
        public static String Add(String str1,String str2){
            byte rest=0;
		String Result="";
                long s1,s2,result;
		int i=0,  j=str1.length();
		for(i=str2.length();i>0;i-=n,j-=n){
                s1=Long.parseLong(str1.substring( Math.max(j-n, 0),j))+rest;
        	s2=Long.parseLong(str2.substring(	Math.max( i-n,0),i));
                result=s1+s2;
			rest=(byte) (result/m);
			Result=AddZeros(result%m)+Result;
                        
		}
                if(j<=0)return DropZeros(rest+Result);
                while(rest==1){
                 result=Long.parseLong(str1.substring(Math.max(j-n,0),Math.max(j,0)))+rest;
       		Result=((j>0)?(AddZeros(result%m)):"")+Result;
		j-=n;
                rest=(byte) (result/m);
              
                }
                
		Result=((j>0)?(str1.substring(0,Math.max(j,0))):"")+Result;
        return DropZeros(Result);
        }
        public static String Sub(String str1,String str2){
             byte rest=0;
		String Result="";
		int i=0,  j=str1.length();
                long s1,s2,result;
		for(i=str2.length();i>0;i-=n,j-=n){
			 s1=Long.parseLong(str1.substring( Math.max(j-n, 0),j))+rest;
			 s2=Long.parseLong(str2.substring(	Math.max( i-n,0),i));
			 result=s1-s2;
                        if(result<0){
                            result=m+result;
                            rest=-1;
                        }
                        else rest=0;
			Result=AddZeros(result%m)+""+Result;
                        System.out.println(s1 + "  " + s2 + "  " + result + "  " + rest );
		}
                while(rest==-1){
                 result=Long.parseLong(str1.substring(Math.max(j-n,0),j))+rest;
       		if(result<0){
                            result=m+result;
                            rest=-1;
                        }
                        else rest=0;
                Result=((j>0)?(AddZeros(result%m)):"")+Result;
		j-=n;
                  System.out.println(result + "  " + rest );
                }
                Result=((j>0)?(str1.substring(0,Math.max(j,0))):"")+Result;
                
            return DropZeros(Result);
        }
        public static String mul(String str1,String str2){
            int rest=0;
		String Result="";
                String LastResult="";
                String Zeros="";
                long s1,s2,result;
		for(int i=str2.length();i>0;i-=n){
                    s2=Long.parseLong(str2.substring(Math.max( i-n,0),i));
                    for(int j=str1.length();j>0;j-=n){
			 s1=Long.parseLong(str1.substring( Math.max(j-n, 0),j));
			 result=(s1*s2)+rest;
			rest= (int) (result/m);
			Result=AddZeros( result%m)+Result;
		}
                    Result=rest+Result+Zeros;
                    LastResult=Add(Result, LastResult);
                    Zeros+="00";
                    Result="";
                    rest=0;
                }
            
            return LastResult;
        }
        public static String Div(String str1,String str2){
             String Result="";
               long s1,s2=Long.parseLong(str2.substring(0,Math.min(n-1,str2.length())));
                s1=Long.parseLong(str1.substring(0,Math.min(n, str1.length())));
                int devid=(int) (s1/s2);
                String down=mul(str2, devid+"");
                int index=down.length();
                
                
                if(down.charAt(0)-str1.charAt(0)<-2)index--;
                String up=str1.substring(0,index);
                while(LessThen(up,down)){ 
                   down=Sub(down,str2);    
                   devid--; 
                  }
                index=up.length();
                up=Sub(up, down);
                Result+=devid;

                while(index<str1.length()){
                    up+=str1.substring(index,Integer.min(str1.length(), index+n-1));
                    index+=n-1;
                    s1=Integer.parseInt(up.substring(0,Math.min(Math.min(n, up.length()), str1.length())));
                    devid=(int) (s1/s2);
                    down=mul(str2, devid+"");
                    while(LessThen(up,down)){ 
                   down=Sub(down,str2);    
                   devid--; 
                  }
                    up=Sub(up, down);
                Result+=devid;
                }
                return Result;
        }
        public static String Mod(String str1,String str2){
             
                 String Result="";
               long s1,s2=Integer.parseInt(str2.substring(0,Math.min(n-1,str2.length())));
                s1=Integer.parseInt(str1.substring(0,Math.min(n, str1.length())));
                int devid=(int) (s1/s2);
                String down=mul(str2, devid+"");
                int index=down.length();
                
                int delta=down.charAt(0)-str1.charAt(0);
                if(delta<-3)index--;
                String up=str1.substring(0,index);
                while(LessThen(up,down)){
                      //if(delta>0)down="0"+down; 
                   down=Sub(down,str2);    
                   devid--; 
                  }
                index=up.length();
                up=Sub(up, down);
                Result+=devid;

                while(index<str1.length()){
                    up+=str1.substring(index,index+n-1);
                    index+=n-1;
                    s1=Integer.parseInt(up.substring(0,Math.min(n, str1.length())));
                    devid=(int) (s1/s2);
                    down=mul(str2, devid+"");
                    while(LessThen(up,down)){ 
                   down=Sub(down,str2);    
                   devid--; 
                  }
                    up=Sub(up, down);
                Result+=devid;
                }
                
                return up;
        }
        private static String AddZerosAtEnd(String str1,int n){
		String s=str1+"";
		for(int i=s.length();i<n;i++)
			s+="0";
		return s;
	}
	private static String AddZeros(long str){
		String s=str+"";
		for(int i=s.length();i<n;i++)
			s="0"+s;
		return s;
	}
        private static String AddZerosAtStart(String str,int n){
            String s=str;
            for(int i=0; i<n-str.length();i++)
                s="0"+s;
            return s;
        }

        private static String DropZeros(String str){
            int i;
            for(i=0;i<str.length()&&str.charAt(i)=='0';i++);                   
        return str.substring(i);
        }
        public static boolean LessThen(String str1,String str2){
            int len=str1.length();
            if(len<str2.length())return true;
            else if(str1.equals(str2))return false;
            else if(len==str2.length()){
                for(int i=0;i<len;i++){
                   if(str1.charAt(i)!=str2.charAt(i)){
                       if(str1.charAt(i)<str2.charAt(i))return true;
                       else return false;
                   } 
                }
        }
            return false;
}



}

