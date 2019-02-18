#include<string>
using std::string;

class SondaggioLibro
{
      public:
              const static int studenti=10;
              SondaggioLibro(string,int[]);
              void setTitoloLibro(string);
              string getTitoloLibro();
              void stampaIntro();
              void risultati();
              int getMinimo();
              int getMassimo();
              double getMedia();
              void stampaIstogramma();
              void stampaStudentiEVoto();
              
      private:
               string titoloLibro;
               int voti[studenti];
               };

