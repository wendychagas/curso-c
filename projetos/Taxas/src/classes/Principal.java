package classes;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.stage.Stage;

/*
import java.util.Scanner;

class Taxas {
    double totalComJuros;
    double parcelaComJuros;
    double juros;
}

public class Principal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double valorServico;
        double taxaJuros[] = {3.14, 4.99, 5.89, 6.79, 7.69, 8.59, 9.54, 10.44, 11.34, 12.24, 13.14, 14.04};
        Taxas taxa[] = new Taxas[12];

        // entrada;
        System.out.print("Valor serviço R$");
        valorServico = sc.nextDouble();

        // processamento;
        for(int i=0; i<12; i++) {
            double taxaPorcentagem = taxaJuros[i] / 100;
            taxa[i] = new Taxas();
            taxa[i].totalComJuros = valorServico * (1 + taxaPorcentagem);
            taxa[i].parcelaComJuros = taxa[i].totalComJuros / (i + 1);
            taxa[i].juros = taxa[i].totalComJuros - valorServico;
        }

        // saída;
        for (int i = 0; i < 12; i++) {
            System.out.printf("Parcela: %dx \t R$%.2f \t R$%.2f \t Juros: R$%.2f\n",
                    i + 1, taxa[i].parcelaComJuros, taxa[i].totalComJuros, taxa[i].juros);
        }
        sc.close();
    }
}
*/

public class CalculadoraDeTaxasGUI extends Application {
    private TextField valorServicoField;
    private TextArea resultadoArea;

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Calculadora de Taxas");

        // Criação dos elementos da interface gráfica
        Label valorServicoLabel = new Label("Valor do serviço R$");
        valorServicoField = new TextField();
        Button calcularButton = new Button("Calcular");
        resultadoArea = new TextArea();

        // Configuração do layout
        VBox layout = new VBox(10);
        layout.getChildren().addAll(valorServicoLabel, valorServicoField, calcularButton, resultadoArea);
        Scene scene = new Scene(layout, 400, 300);

        // Configuração do evento de clique do botão
        calcularButton.setOnAction(e -> calcularTaxas());

        // Exibição da interface gráfica
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private void calcularTaxas() {
        try {
            double valorServico = Double.parseDouble(valorServicoField.getText());
            double[] taxaJuros = {3.14, 4.99, 5.89, 6.79, 7.69, 8.59, 9.54, 10.44, 11.34, 12.24, 13.14, 14.04};
            resultadoArea.clear();

            for (int i = 0; i < 12; i++) {
                double taxaPorcentagem = taxaJuros[i] / 100.0;
                double totalComJuros = valorServico * (1 + taxaPorcentagem);
                double parcelaComJuros = totalComJuros / (i + 1);
                double juros = totalComJuros - valorServico;

                resultadoArea.appendText("Parcela: " + (i + 1) + "x \t R$" + String.format("%.2f", parcelaComJuros) +
                        " \t R$" + String.format("%.2f", totalComJuros) + " \t Juros: R$" + String.format("%.2f", juros) + "\n");
            }
        } catch (NumberFormatException ex) {
            resultadoArea.setText("Insira um valor válido para o serviço.");
        }
    }
}
