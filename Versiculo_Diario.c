#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int i;
char vers[100][200];
char resposta;
void versiculos(){
        strcpy(vers[0], "A mulher virtuosa é a coroa do seu marido; porém a que procede vergonhosamente é como apodrecimento nos seus ossos\n- Pv 12:4");
        strcpy(vers[1], "Toda mulher sábia edifica a sua casa; a insensata, porém, derruba-a com as suas mãos\n- Pv 14:1");
        strcpy(vers[2], "Quem encontra uma esposa acha uma coisa boa; e alcança o favor do Senhor\n- Pv 18:22");
        strcpy(vers[3], "Casa e riquezas são herdadas dos pais; mas a mulher prudente vem do Senhor\n- Pv 19:14");
        strcpy(vers[4], "O que responde com palavras retas beija os lábios\n- Pv 24:26");
        strcpy(vers[5], "Melhor é a repreensão aberta do que o amor encoberto\n- Pv 27:5");
        strcpy(vers[6], "O homem fiel gozará de abundantes bênçãos; mas o que se apressa a enriquecer não ficará impune\n- Pv 28:20");
        strcpy(vers[7], "Todas as coisas me são lícitas, mas nem todas as coisas convêm. Todas as coisas me são lícitas; mas eu não me deixarei dominar por nenhuma delas\n- 1Co 6:12");
        strcpy(vers[8], "A ansiedade no coração do homem o abate; mas uma boa palavra o alegra\n- Pv 12:25");
        strcpy(vers[9], "O amigo ama em todo o tempo; e para a angústia nasce o irmão\n- Pv 17:17");
        strcpy(vers[10], "Porque Deus amou o mundo de tal maneira que deu o seu Filho unigênito, para que todo aquele que nele crê não pereça, mas tenha a vida eterna\n- Jo 3:16");
        strcpy(vers[11], "Mas, como está escrito: As coisas que olhos não viram, nem ouvidos ouviram, nem penetraram o coração do homem, são as que Deus preparou para os que o amam\n- 1Co 2:9");
        strcpy(vers[12], "Eis que estou à porta e bato; se alguém ouvir a minha voz, e abrir a porta, entrarei em sua casa, e com ele cearei, e ele comigo\n- Ap 3:20");
        strcpy(vers[13], "Responderam: De César. Então lhes disse: Dai, pois, a César o que é de César, e a Deus o que é de Deus\n- Mt 22:21");
        strcpy(vers[14], "Mas buscai primeiro o seu reino e a sua justiça, e todas estas coisas vos serão acrescentadas\n- Mt 6:33");
        strcpy(vers[15], "Não ajunteis para vós tesouros na terra; onde a traça e a ferrugem os consomem, e onde os ladrões minam e roubam; mas ajuntai para vós tesouros no céu, onde nem a traça nem a ferrugem os consomem, e onde os ladrões não minam nem roubam. Porque onde estiver o teu tesouro, aí estará também o teu coração\n- Mt 6:19-21");
        strcpy(vers[16], "Respondeu-lhe Jesus: Eu sou o caminho, e a verdade, e a vida; ninguém vem ao Pai, senão por mim\n- Jo 14:6");
        strcpy(vers[17], "Toda mulher sábia edifica a sua casa; a insensata, porém, derruba-a com as suas mãos\n- Pv 14:1");
        strcpy(vers[18], "Até no riso terá dor o coração; e o fim da alegria é tristeza\n- Pv 14:13");
        strcpy(vers[19], "para que vos torneis filhos do vosso Pai que está nos céus; porque ele faz nascer o seu sol sobre maus e bons, e faz chover sobre justos e injustos\n- Mt 5:45");
        strcpy(vers[20], "Ainda que eu falasse as línguas dos homens e dos anjos, e não tivesse amor, seria como o metal que soa ou como o címbalo que retine\n- 1Co 13:1");
        strcpy(vers[21], "O que ama a contenda ama a transgressão; o que faz alta a sua porta busca a ruína\n- Pv 17:19");
        strcpy(vers[22], "Posso todas as coisas naquele que me fortalece\n- Fp 4:13");
        strcpy(vers[23], "O homem que tem muitos amigos, tem-nos para a sua ruína; mas há um amigo que é mais chegado do que um irmão\n- Pv 18:24");
        strcpy(vers[24], "e uso de misericórdia com milhares dos que me amam e guardam os meus mandamentos\n- Ex 20:6");
        strcpy(vers[25], "Vinde a mim, todos os que estai cansados e oprimidos, e eu vos aliviarei\n- Mt 11:28");
        strcpy(vers[26], "Pois não faço o bem que quero, mas o mal que não quero, esse pratico\n- Rm 7:19");
        strcpy(vers[27], "Quem ama os prazeres empobrecerá; quem ama o vinho e o azeite nunca enriquecerá\n- Pv 21:17");
        strcpy(vers[28], "O que guarda a sua boca e a sua língua, guarda das angústias a sua alma\n- Pv 21:23");
        strcpy(vers[29], "Não digas: Como ele me fez a mim, assim lhe farei a ele; pagarei a cada um segundo a sua obra\n- Pv 24:29");
        strcpy(vers[30], "Põe raramente o teu pé na casa do teu próximo, para que não se enfade de ti, e te aborreça\n- Pv 25:17");
        strcpy(vers[31], "Se o teu inimigo tiver fome, dá-lhe pão para comer, e se tiver sede, dá-lhe água para beber\n- Pv 25:21");
        strcpy(vers[32], "Não respondas ao tolo segundo a sua estultícia, para que também não te faças semelhante a ele\n- Pv 26:4");
        strcpy(vers[33], "Como o louco que atira tições, flechas, e morte, assim é o homem que engana o seu próximo, e diz: Fiz isso por brincadeira\n- Pv 26:18-19");
        strcpy(vers[34], "Não tomarás o nome do Senhor teu Deus em vão; porque o Senhor não terá por inocente aquele que tomar o seu nome em vão\n- Ex 20:7");
        strcpy(vers[35], "Porque há um só Deus, e um só Mediador entre Deus e os homens, Cristo Jesus, homem\n- 1Tm 2:5");
        strcpy(vers[36], "O filho insensato é a calamidade do pai; e as rixas da mulher são uma goteira contínua\n- Pv 19:13");
        strcpy(vers[37], "Melhor é morar num canto do eirado, do que com a mulher rixosa numa casa ampla\n- Pv 21:9");
        strcpy(vers[38], "Melhor é morar numa terra deserta do que com a mulher rixosa e iracunda\n- Pv 21:19");
        strcpy(vers[39], "Cova profunda é a boca da adúltera; aquele contra quem o Senhor está irado cairá nela\n- Pv 22:14");
        strcpy(vers[40], "Cova profunda é a boca da adúltera; aquele contra quem o Senhor está irado cairá nela\n- Pv 22:14");
        strcpy(vers[41], "Porque cova profunda é a prostituta; e poço estreito é a aventureira. Também ela, como o salteador, se põe a espreitar; e multiplica entre os homens os prevaricadores\n- Pv 23:27-28");
        strcpy(vers[42], "Melhor é morar num canto do eirado, do que com a mulher rixosa numa casa ampla\n- Pv 25:24");
        strcpy(vers[43], "Como o vaso de barro coberto de escória de prata, assim são os lábios ardentes e o coração maligno\n- Pv 26:23");
        strcpy(vers[44], "A goteira contínua num dia chuvoso e a mulher rixosa são semelhantes\n- Pv 27:15");
        strcpy(vers[45], "Tal é o caminho da mulher adúltera: ela come, e limpa a sua boca, e diz: não pratiquei iniquidade\n- Pv 30:20");
        strcpy(vers[46], "Toda mulher sábia edifica a sua casa; a insensata, porém, derruba-a com as suas mãos\n- Pv 14:1");
        strcpy(vers[47], "E eu achei uma coisa mais amarga do que a morte, a mulher cujo coração são laços e redes, e cujas mãos são grilhões; quem agradar a Deus escapará dela; mas o pecador virá a ser preso por ela\n- Ec 7:26");
        strcpy(vers[48], "A mulher virtuosa é a coroa do seu marido; porém a que procede vergonhosamente é como apodrecimento nos seus ossos\n- Pv 12:4");
        strcpy(vers[49], "Saberás, pois, no teu coração que, como um homem corrige a seu filho, assim te corrige o Senhor teu Deus\n- Dt 8:5");
        strcpy(vers[50], "Como as nações que o Senhor vem destruindo diante de vós, assim vós perecereis, por não quererdes ouvir a voz do Senhor vosso Deus\n- Dt 8:20");
        strcpy(vers[51], "Saibam todos que eu, somente eu, sou Deus; não há outro deus além de mim. Eu mato e eu faço viver; eu firo e eu curo. Ninguém pode me impedir de fazer o que quero\n- Dt 32:39");        
        strcpy(vers[52], "— Não fiquem com medo! — respondeu Samuel. — Embora vocês tenham feito uma coisa tão má, não deixem de adorar o Senhor, nosso Deus, mas sirvam a ele com todo o coração.\n- 1Sm 12:20");
        strcpy(vers[53], "O pecado entrou no mundo por meio de um só homem, e o seu pecado trouxe consigo a morte. Como resultado, a morte se espalhou por toda a raça humana porque todos pecaram\n- Rm 5:12");
        strcpy(vers[54], "Tu és puro para os que são puros, mas és inimigo dos que são maus\n- 2Sm 22:27");
        strcpy(vers[55], "Tu salvas os humildes, mas humilhas os orgulhosos\n- 2Sm 22:28");
        strcpy(vers[56], "Mas os pagãos são como os espinhos jogados fora: ninguém se atreve a pegá-los com as mãos; para isso é preciso uma ferramenta de ferro ou de madeira; eles serão totalmente queimados no fogo.\n- 2Sm 23:6-7");
        strcpy(vers[57], "");
        strcpy(vers[58], "");
        strcpy(vers[59], "");
        strcpy(vers[60], "");
        strcpy(vers[61], "");
        strcpy(vers[62], "");
        strcpy(vers[63], "");
        strcpy(vers[64], "");
        strcpy(vers[65], "");
        strcpy(vers[66], "");
        strcpy(vers[67], "");
        strcpy(vers[68], "");
        strcpy(vers[69], "");
        strcpy(vers[70], "");
        strcpy(vers[71], "");
        strcpy(vers[72], "");
        strcpy(vers[73], "");
        strcpy(vers[74], "");
        strcpy(vers[75], "");
        strcpy(vers[76], "");
        strcpy(vers[77], "");
        strcpy(vers[78], "");
        strcpy(vers[79], "");
        strcpy(vers[80], "");
        strcpy(vers[81], "");
        strcpy(vers[82], "");
        strcpy(vers[83], "");
        strcpy(vers[84], "");
        strcpy(vers[85], "");
        strcpy(vers[86], "");
        strcpy(vers[87], "");
        strcpy(vers[88], "");
        strcpy(vers[89], "");
        strcpy(vers[90], "");
        strcpy(vers[91], "");
        strcpy(vers[92], "");
        strcpy(vers[93], "");
        strcpy(vers[94], "");
        strcpy(vers[95], "");
        strcpy(vers[96], "");
        strcpy(vers[97], "");
        strcpy(vers[98], "");
        strcpy(vers[99], "");
}

void repeticao() {
    i = rand() % 57;
    printf("Versiculo do dia:\n%s\n", vers[i]);
    printf("\nGostaria de outro versiculo? (Y/N): ");
    scanf("%s", &resposta);
}

int main() {
    SetConsoleOutputCP(CP_UTF8); //juntamento com a biblioteca #include <windows.h>, esse comando permite acentos
    srand(time(NULL));
    versiculos();
    printf("\nGostaria de um versiculo? (Y/N): ");
    scanf("%s", &resposta);
    if (resposta != 'Y' && resposta != 'y') return 0;

    do
        repeticao();
    while (resposta == 'Y' || resposta == 'y');

    return 0;
}