package exercicio;

public class exercicio7 {
    public static void main(String[] args) {
        int x = 13;
        System.out.println("Iniciando...\n" +x);
        while(x != 1){
            if(x % 2 == 0) {

            } else{
                x= 3 * x + 1;
            }
            System.out.println(x);
        }
    }
}
