import QtQuick 2.7
import QtGraphicalEffects 1.0

Page1Form {
    width: 800
    height: 480
    slider.onValueChanged: {
        //funcion al soltar
        //serialito.valorslider()= slider.value();
        //return slider.value;

}
    slider.onPositionChanged: {

        //se actuaiza en vivo
    }
    radioButton3.onClicked: {

        serialito.iniciarSerial();
}

    switch3.onClicked: {
        serialito.rojoRGB();
    }

    switch2.onClicked: {
        serialito.azulRGB();
    }




    //serialito.test:

    Component.onCompleted: {
        //serialito.test();
        console.log("se inicio correctamente ");
    }
}
