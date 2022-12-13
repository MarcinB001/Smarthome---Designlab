#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    // get/set kuchnia
    void setTempKuchnia(int temp); 
    int getTempKuchnia();

    void setKuchniaPodgrzewanie(bool on);
    bool getKuchniaPodgrzewanie();

    void setKuchniaOswietlenie(bool on);
    bool getKuchniaOswietlenie();

    void setKuchniaSzafka(bool on);
    bool getKuchniaSzafka();

    // kuchenka
    void setMocPalnik1(int moc);
    int getMocPalnik1();
    void setMocPalnik2(int moc);
    int getMocPalnik2();
    void setMocPalnik3(int moc);
    int getMocPalnik3();
    void setMocPalnik4(int moc);
    int getMocPalnik4();

    void setStatePalnik1(bool on);
    bool getStatePalnik1();
    void setStatePalnik2(bool on);
    bool getStatePalnik2();
    void setStatePalnik3(bool on);
    bool getStatePalnik3();
    void setStatePalnik4(bool on);
    bool getStatePalnik4();

    //salon
    void setTempSalon(int temp);
    int getTempSalon();
    void setSalonPodgrzewanie(bool on);
    bool getSalonPodgrzewanie();
    void setSalonOswietlenie(bool on);
    bool getSalonOswietlenie();

    //ogrod
    void setTempBasen(int temp);
    int getTempBasen();
    void setOgrodPodlewanie(bool on);
    bool getOgrodPodlewanie();
    void setOgrodOswietlenie(bool on);
    bool getOgrodOswietlenie();

    //garaz
    void setLadowanie(bool on);
    bool getLadowanie();
   
protected:
    ModelListener* modelListener;
    //kuchnia
    int tempKuchnia;
    bool podgrzewanieKuchnia, oswietlenieKuchnia, szafkaKuchnia;
    //salon
    int tempSalon;
    bool podgrzewanieSalon;
    bool oswietlenieSalon;
    //kuchenka
    int mocPalnik1, mocPalnik2, mocPalnik3, mocPalnik4;
    bool statePalnik1, statePalnik2, statePalnik3, statePalnik4;
    //ogrod
    int tempBasen;
    bool podlewanie, oswietlenieOgrod;
    //garaz
    bool ladowanie;
};

#endif // MODEL_HPP
