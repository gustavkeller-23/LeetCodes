import java.util.Scanner;

public class Soluction {

    public static class Resultado {
        private int[] indices;

        public Resultado() {
            this.indices = new int[2];
        }

        public int[] getIndices() {
            return indices;
        }

        public void setIndices(int i, int j) {
            this.indices[0] = i;
            this.indices[1] = j;
        }

        public boolean isEncontrado() {
            return indices[0] != 0 || indices[1] != 0;
        }
    }

    public static Resultado buscarIndices(int[] array, int target) {
        int TAM_ARRAY = array.length;
        Resultado resultado = new Resultado();

        for (int i = 0; i < TAM_ARRAY - 1; i++) {
            for (int j = i + 1; j < TAM_ARRAY; j++) {
                if (array[i] + array[j] == target) {
                    resultado.setIndices(i, j);
                    return resultado;
                }
            }
        }

        resultado.setIndices(0, 0);
        return resultado;
    }

    public static void main(String[] args) {
        int[] array = {-1, 2, 3, 4, 5, 6};
        Scanner scanner = new Scanner(System.in);

        System.out.println("Insira um valor que você busca encontrar a soma: ");
        int target = scanner.nextInt();

        Resultado resultado = buscarIndices(array, target);

        if (resultado.isEncontrado()) {
            System.out.printf("[%d, %d]%n", resultado.getIndices()[0], resultado.getIndices()[1]);
        } else {
            System.out.println("Não temos valores que resultam nessa soma");
        }

        scanner.close();
    }
}

