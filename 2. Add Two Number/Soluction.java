
public class Soluction {

    public static class ManipuladorArray {
        
        public ManipuladorArray(){}

        public int gerarNumero(int[] array){
            int num = 0;
            int potenciaDeDez = 1;
            for(int elem : array){
                num += elem*potenciaDeDez;
                potenciaDeDez *= 10;
            }
            return num;
        }

        public int somarNumeros(int numeroArray1, int numeroArray2){
            return numeroArray1 + numeroArray2;
        }

        public int[] gerarArray(int numero){
            int tamNumero = tamanhoNumero(numero);
            int potenciaDeDez = potencia(10, tamNumero-1);
            int newArray[] = new int[tamNumero];
            int jaAchou = 0;

            for (int i = tamNumero-1; i >= 0; i--){
                for(int j = 0; j <= 10 && jaAchou == 0; j++){
                    if (j*potenciaDeDez > numero){
                        newArray[i] = j-1;
                        jaAchou = 1;
                        numero -= (j-1)*potenciaDeDez;
                    }   
                }
                jaAchou = 0;
                potenciaDeDez /= 10;
            }

            return newArray;
        }

        public int potencia(int base, int potencia){
            int num = 1;
            for(int i = 0; i < potencia; i++)
                num *= base;
            return num;
        }

        public int tamanhoNumero(int numero){
            int tamNumero = 0;
            while(numero >= 1){
                numero /= 10;
                tamNumero++;
            }
            return tamNumero;
        }
    }

    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5, 6};
        int[] array2 = {2, 5, 3};

        ManipuladorArray resultado = new ManipuladorArray();

        int numArray1 = resultado.gerarNumero(array1);
        int numArray2 = resultado.gerarNumero(array2);

        int numArray3 = resultado.somarNumeros(numArray1, numArray2);
        int[] array3 = resultado.gerarArray(numArray3);
        
        System.out.print("[");
        for(int elem : array3)
            System.out.print(elem+" ");
        System.out.print("]");
    }
}