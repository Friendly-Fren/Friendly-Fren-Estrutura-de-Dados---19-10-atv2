import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o primeiro número: ");
        float num1 = input.nextFloat();

        System.out.print("Digite o segundo número: ");
        float num2 = input.nextFloat();

        float soma = num1 + num2;
        float sub = num1 - num2;
        float mult = num1 * num2;
        float div = num1 / num2;

        System.out.println("Soma: " + soma);
        System.out.println("Subtração: " + sub);
        System.out.println("Multiplicação: " + mult);
        System.out.println("Divisão: " + div);
    }
}
