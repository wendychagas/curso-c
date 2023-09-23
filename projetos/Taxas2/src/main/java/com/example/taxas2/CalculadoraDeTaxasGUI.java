package com.example.taxas2;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;

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
        valorServicoLabel.setFont(Font.font("Arial", FontWeight.BOLD, 16));

        valorServicoField = new TextField();
        valorServicoField.setFont(Font.font("Arial", 16));

        Button calcularButton = new Button("Calcular");
        calcularButton.setStyle("-fx-background-color: #0073e6; -fx-text-fill: white;");
        calcularButton.setFont(Font.font("Arial", FontWeight.BOLD, 16));

        resultadoArea = new TextArea();
        resultadoArea.setEditable(false);
        resultadoArea.setFont(Font.font("Arial", 14));

        // Configuração do layout
        VBox layout = new VBox(10);
        layout.setPadding(new Insets(10));
        layout.getChildren().addAll(valorServicoLabel, valorServicoField, calcularButton, resultadoArea);
        Scene scene = new Scene(layout, 400, 300);

        // Configuração do evento de clique do botão
        calcularButton.setOnAction(e -> calcularTaxas());

        // Estilo do fundo da janela
        layout.setStyle("-fx-background-color: #f0f0f0;");

        // Exibição da interface gráfica
        primaryStage.isResizable();
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private void calcularTaxas() {
        try {
            double valorServico = Double.parseDouble(valorServicoField.getText());
            double[] taxaJuros = {3.14, 4.99, 5.89, 6.79, 7.69, 8.59, 9.54, 10.44, 11.34, 12.24, 13.14, 14.04};
            resultadoArea.clear();

            for (int i = 0; i < 12;) {
                double taxaPorcentagem = taxaJuros[i] / 100.0;
                double totalComJuros = valorServico * (1 + taxaPorcentagem);
                double parcelaComJuros = totalComJuros / (i + 1);
                double juros = totalComJuros - valorServico;

                resultadoArea.appendText("Parcela: "+(i + 1)+"x\tR$"+String.format("%.2f", parcelaComJuros)+"\tR$"+String.format("%.2f", totalComJuros)+"\tJuros: R$"+String.format("%.2f", juros)+"\n");
                i++;
            }
        } catch (NumberFormatException ex) {
            resultadoArea.setText("Insira um valor válido para o serviço.");
        }
    }
}
