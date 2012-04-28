#include "catan_map.h"
#include "ui_catan_map.h"

catan_map::catan_map(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::catan_map)
{
    QString image = "map_semi_final.png";
    ui->setupUi(this);
    QPixmap pix = QPixmap(image);
    ui->image_label->setPixmap(pix);

    signalMapper = new QSignalMapper(this); //signal map

    //connect buttons to signal mapper

    activate_settlements();

    activate_roads();

    activate_other();

    //final signal mapping connection (calls signalSorter to sort signals!)
    connect(signalMapper, SIGNAL(mapped(const QString &)), this, SLOT(signalSorter(const QString &)));
    //checkPlayers();
    checkPlayer();
}

catan_map::~catan_map()
{
    delete ui;
}

void catan_map::signalSorter(const QString & button)
{
    qDebug() << "made it here: " << button;
}

void catan_map::checkPlayer(){
/*    if (player.player_amount == 1){
        ui->handButton_4->setDisabled(false);
        ui->player3_label->setText(player.name(1));

    }
*/
}

void catan_map::activate_settlements(){

    /////////////////////////////////////////////
    //START SETTLEMENT BUTTON MAPPING!!
    ///////////////////
<<<<<<< HEAD
    //Format is city ID|left Color|left node|right node|right node|top color|top node|port
    connect(ui->pushSettle_221, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_221, "221|0|0|d|1|0|0|3");

    connect(ui->pushSettle_223, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_223, "223|0|0|0|0|d|1|3");

    connect(ui->pushSettle_230, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_230, "230|d|1|l|2|0|0|0");

    connect(ui->pushSettle_281, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_281, "281|0|0|0|0|l|2|l");

    connect(ui->pushSettle_330, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_330, "330|l|2|y|3|0|0|l");

    connect(ui->pushSettle_331, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_331, "331|0|0|0|0|y|3|0");

    connect(ui->pushSettle_334, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_334, "334|y|3|0|0|0|0|0");
=======
    connect(ui->pushSettle_01, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_01, "settle_01");

    connect(ui->pushSettle_02, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_02, "settle_02");

    connect(ui->pushSettle_03, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_03, "settle_03");

    connect(ui->pushSettle_04, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_04, "settle_04");

    connect(ui->pushSettle_05, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_05, "settle_05");

    connect(ui->pushSettle_06, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_06, "settle_06");

    connect(ui->pushSettle_07, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_07, "settle_07");
>>>>>>> a9155c57dcae44069ee4c9ba6e40f4676688461d

    connect(ui->pushSettle_08, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_08, "settle_08");

<<<<<<< HEAD
    connect(ui->pushSettle_220, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_220, "220|0|0|d|1|r|4|0");

    connect(ui->pushSettle_22, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_22, "22|r|4|b|5|d|1|0");

    connect(ui->pushSettle_23, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_23, "23|d|1|l|2|b|5|0");

    connect(ui->pushSettle_30, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_30, "30|b|5|r|6|l|2|0");

    connect(ui->pushSettle_33, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_33, "33|l|2|y|3|r|6|0");

    connect(ui->pushSettle_34, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_34, "34|r|6|l|7|y|3|0");

    connect(ui->pushSettle_340, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_340, "340|y|3|0|0|l|7|3");

    connect(ui->pushSettle_391, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_391, "391|l|7|0|0|0|0|3");
=======
    connect(ui->pushSettle_09, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_09, "settle_09");

    connect(ui->pushSettle_10, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_10, "settle_10");

    connect(ui->pushSettle_11, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_11, "settle_11");

    connect(ui->pushSettle_12, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_12, "settle_12");

    connect(ui->pushSettle_13, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_13, "settle_13");

    connect(ui->pushSettle_14, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_14, "settle_14");

    connect(ui->pushSettle_15, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_15, "settle_15");

    connect(ui->pushSettle_16, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_16, "settle_16");
>>>>>>> a9155c57dcae44069ee4c9ba6e40f4676688461d

    connect(ui->pushSettle_17, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_17, "settle_17");

    connect(ui->pushSettle_18, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_18, "settle_18");

<<<<<<< HEAD
    connect(ui->pushSettle_12, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_12, "12|0|0|d|8|r|4|0");

    connect(ui->pushSettle_20, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_20, "20|r|4|d|5|d|8|0");

    connect(ui->pushSettle_2, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_2, "2|d|8|y|9|b|5|0");

    connect(ui->pushSettle_3, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_3, "3|b|5|r|6|y|9|0");

    connect(ui->pushSettle_4, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_4, "4|y|9|d|10|r|6|0");

    connect(ui->pushSettle_40, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_40, "40|r|6|l|7|d|10|0");

    connect(ui->pushSettle_44, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_44, "44|d|10|y|11|l|7|0");

    connect(ui->pushSettle_440, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_440, "440|l|7|0|0|y|11|0");

    connect(ui->pushSettle_441, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_441, "441|y|11|0|0|0|0|3");
=======
    connect(ui->pushSettle_19, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_19, "settle_19");

    connect(ui->pushSettle_20, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_20, "settle_20");

    connect(ui->pushSettle_21, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_21, "settle_21");

    connect(ui->pushSettle_22, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_22, "settle_22");

    connect(ui->pushSettle_23, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_23, "settle_23");

    connect(ui->pushSettle_24, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_24, "settle_24");

    connect(ui->pushSettle_25, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_25, "settle_25");

    connect(ui->pushSettle_26, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_26, "settle_26");

    connect(ui->pushSettle_27, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_27, "settle_27");
>>>>>>> a9155c57dcae44069ee4c9ba6e40f4676688461d

    connect(ui->pushSettle_28, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_28, "settle_28");

<<<<<<< HEAD
    connect(ui->pushSettle_110, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_110, "110|0|0|r|12|0|0|y");

    connect(ui->pushSettle_11, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_11, "11|0|0|d|8|r|12|0");

    connect(ui->pushSettle_10, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_10, "10|r|12|l|13|d|8|0");

    connect(ui->pushSettle_1, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_1, "1|d|8|y|9|l|13|0");

    connect(ui->pushSettle_6, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_6, "6|l|13|l|14|y|9|0");

    connect(ui->pushSettle_5, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_5, "5|l|9|d|10|l|14|0");

    connect(ui->pushSettle_50, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_50, "50|l|14|b|15|d|10|0");

    connect(ui->pushSettle_45, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_45, "45|d|10|y|8|b|3|0");
=======
    connect(ui->pushSettle_29, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_29, "settle_29");

    connect(ui->pushSettle_30, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_30, "settle_30");

    connect(ui->pushSettle_31, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_31, "settle_31");

    connect(ui->pushSettle_32, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_32, "settle_32");

    connect(ui->pushSettle_33, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_33, "settle_33");

    connect(ui->pushSettle_34, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_34, "settle_34");

    connect(ui->pushSettle_35, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_35, "settle_35");

    connect(ui->pushSettle_36, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_36, "settle_36");
>>>>>>> a9155c57dcae44069ee4c9ba6e40f4676688461d

    connect(ui->pushSettle_37, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_37, "settle_37");

    connect(ui->pushSettle_38, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_38, "settle_38");

    connect(ui->pushSettle_39, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_39, "settle_39");

    connect(ui->pushSettle_40, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_40, "settle_40");

    connect(ui->pushSettle_41, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_41, "settle_41");

    connect(ui->pushSettle_42, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_42, "settle_42");

    connect(ui->pushSettle_43, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_43, "settle_43");

    connect(ui->pushSettle_44, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_44, "settle_44");

    connect(ui->pushSettle_45, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_45, "settle_45");

    connect(ui->pushSettle_46, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_46, "settle_46");

    connect(ui->pushSettle_47, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_47, "settle_47");

    connect(ui->pushSettle_48, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_48, "settle_48");

    connect(ui->pushSettle_49, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_49, "settle_49");

    connect(ui->pushSettle_50, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_50, "settle_50");

    connect(ui->pushSettle_51, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_51, "settle_51");

    connect(ui->pushSettle_52, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_52, "testing52");

    connect(ui->pushSettle_53, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_53, "settle_53");

    connect(ui->pushSettle_54, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushSettle_54, "settle_54");

    //////////////////
    //END SETTLEMENT BUTTON MAPPING
    ////////////////////////////////////////////
}

void catan_map::activate_roads(){

    ////////////////////////////////////////////
    //START ROAD MAPPING
    ////////////////

    connect(ui->pushRoad_01, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_01, "road_01");

    connect(ui->pushRoad_02, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_02, "road_02");

    connect(ui->pushRoad_03, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_03, "road_03");

    connect(ui->pushRoad_04, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_04, "road_04");

    connect(ui->pushRoad_05, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_05, "road_05");

    connect(ui->pushRoad_06, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_06, "road_06");

    connect(ui->pushRoad_07, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_07, "road_07");

    connect(ui->pushRoad_08, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_08, "road_08");

    connect(ui->pushRoad_09, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_09, "road_09");

    connect(ui->pushRoad_10, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_10, "road_10");

    connect(ui->pushRoad_11, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_11, "road_11");

    connect(ui->pushRoad_12, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_12, "road_12");

    connect(ui->pushRoad_13, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_13, "road_13");

    connect(ui->pushRoad_14, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_14, "road_14");

    connect(ui->pushRoad_15, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_15, "road_15");

    connect(ui->pushRoad_16, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_16, "road_16");

    connect(ui->pushRoad_17, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_17, "road_17");

    connect(ui->pushRoad_18, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_18, "road_18");

    connect(ui->pushRoad_19, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_19, "road_19");

    connect(ui->pushRoad_20, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_20, "road_20");

    connect(ui->pushRoad_21, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_21, "road_21");

    connect(ui->pushRoad_22, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_22, "road_22");

    connect(ui->pushRoad_23, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_23, "road_23");

    connect(ui->pushRoad_24, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_24, "road_24");

    connect(ui->pushRoad_25, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_25, "road_25");

    connect(ui->pushRoad_26, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_26, "road_26");

    connect(ui->pushRoad_27, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_27, "road_27");

    connect(ui->pushRoad_28, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_28, "road_28");

    connect(ui->pushRoad_29, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_29, "road_29");

    connect(ui->pushRoad_30, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_30, "road_30");

    connect(ui->pushRoad_31, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_31, "road_31");

    connect(ui->pushRoad_32, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_32, "road_32");

    connect(ui->pushRoad_33, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_33, "road_33");

    connect(ui->pushRoad_34, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_34, "road_34");

    connect(ui->pushRoad_35, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_35, "road_35");

    connect(ui->pushRoad_36, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_36, "road_36");

    connect(ui->pushRoad_37, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_37, "road_37");

    connect(ui->pushRoad_38, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_38, "road_38");

    connect(ui->pushRoad_39, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_39, "road_39");

    connect(ui->pushRoad_40, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_40, "road_40");

    connect(ui->pushRoad_41, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_41, "road_41");

    connect(ui->pushRoad_42, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_42, "road_42");

    connect(ui->pushRoad_43, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_43, "road_43");

    connect(ui->pushRoad_44, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_44, "road_44");

    connect(ui->pushRoad_45, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_45, "road_45");

    connect(ui->pushRoad_46, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_46, "road_46");

    connect(ui->pushRoad_47, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_47, "road_47");

    connect(ui->pushRoad_48, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_48, "road_48");

    connect(ui->pushRoad_49, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_49, "road_49");

    connect(ui->pushRoad_50, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_50, "road_50");

    connect(ui->pushRoad_51, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_51, "road_51");

    connect(ui->pushRoad_52, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_52, "road_52");

    connect(ui->pushRoad_53, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_53, "road_53");

    connect(ui->pushRoad_54, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_54, "road_54");

    connect(ui->pushRoad_55, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_55, "road_55");

    connect(ui->pushRoad_56, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_56, "road_56");

    connect(ui->pushRoad_57, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_57, "road_57");

    connect(ui->pushRoad_58, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_58, "road_58");

    connect(ui->pushRoad_59, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_59, "road_59");

    connect(ui->pushRoad_60, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_60, "road_60");

    connect(ui->pushRoad_61, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_61, "road_61");

    connect(ui->pushRoad_62, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_62, "road_62");

    connect(ui->pushRoad_63, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_63, "road_63");

    connect(ui->pushRoad_64, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_64, "road_64");

    connect(ui->pushRoad_65, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_65, "road_65");

    connect(ui->pushRoad_66, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_66, "road_66");

    connect(ui->pushRoad_67, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_67, "road_67");

    connect(ui->pushRoad_68, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_68, "road_68");

    connect(ui->pushRoad_69, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_69, "road_69");

    connect(ui->pushRoad_70, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_50, "road_70");

    connect(ui->pushRoad_71, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_71, "road_71");

    connect(ui->pushRoad_72, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->pushRoad_72, "road_72");

    ///////////////
    //END ROAD MAPPING
    ///////////////////////////////////////////

}

void catan_map::activate_other(){

    ////////////////////////////////////////////
    //START MISCELLANEOS MAPPING
    ////////////////

    connect(ui->vhandButton_01, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_01, "vhand_01");

    connect(ui->vhandButton_02, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_02, "vhand_02");

    connect(ui->vhandButton_03, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_03, "vhand_03");

    connect(ui->vhandButton_04, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_04, "vhand_04");

    connect(ui->buyDevButton, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_01, "buyDevCard");

    connect(ui->rollButton, SIGNAL(clicked()), signalMapper, SLOT(map()));
    signalMapper->setMapping(ui->vhandButton_01, "roll");

    ///////////////
    //END MISCELLANEOS MAPPING
    ////////////////////////////////////////////

}
