package exercicio;

public class exercicio8 {
    public static void main(String[] args) {
        int numero = 7;
        for (int linha = 1; linha <= numero; linha++){
            for(int coluna = 1; coluna <= linha; coluna++){
                System.out.println(linha * coluna + " ");
            }
            System.out.println();
        }
    }
}
