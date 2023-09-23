module com.example.taxas2 {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.taxas2 to javafx.fxml;
    exports com.example.taxas2;
}