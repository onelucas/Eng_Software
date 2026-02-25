package aula1;

import javax.swing.JOptionPane;

public class TestaJanelas {

	public static void main(String[] args) {
		
		
		int resultado = JOptionPane.showConfirmDialog(null, "Você gosta de Java?",
				"Informe", 0, 0);
		
		JOptionPane.showMessageDialog(null, 
				"Resultado =" + resultado,
				"Título",
				 2);
		
		JOptionPane.showInputDialog(null,
				"Qual o melhor time do brasil"
				"Escolha",
				null, 3, null, null, "Flamengo!");
		
		String melhortime;
		JOptionPane.showMessageDialog(null, 
				"Melhor time = " + melhortime
				"Título",
				melhortime, 2);
		
		

}
