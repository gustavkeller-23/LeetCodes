
public class Soluction {

    public static class Resultado {
        public Resultado(){}
    
        public int longestSubstring(String string){
            int sizeLongest = 0;
            int index[] = {0,0};
            int indexTemp=0;

            for (int i = 1; i < string.length()-1 &&  string.charAt(i) != '\0'; i++){
                for (int j = indexTemp; j < i; j++){
                    if(string.charAt(j) == string.charAt(i) || string.charAt(i+1) == '\0'){
                        if (i-indexTemp >= sizeLongest){
                            index[0] = indexTemp;
                            index[1] = i-1;
                            sizeLongest = i-index[0];
                        }
                        indexTemp = j+1;
                    }         
                }
            }

            if (index[0] == 0 && index[1] == 0)
                return string.length();
            
            return index[1]-index[0]+1;
        }
    }

    public static void main(String[] args) {
        String string = "pwewke";
        
        Resultado results = new Resultado();
        
        int sizeSubstring = results.longestSubstring(string);
        
        System.out.println("["+sizeSubstring+"]");
    }
}