package exercicio;

public class exercicio4e5 {
    public static void main(String[] args) {
        System.out.println("Imprima os fatoriais:");

        long fatorial = 1;
        for(long n=1; n<=40; n++){
            fatorial = fatorial*n;
            System.out.println(fatorial);
        }
    }
}
