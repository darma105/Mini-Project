#include <iostream>

int main()
{

    int nomor_laptop;
    int nomor_laptop2;
    int nomor_laptop3;
    int jumlah_laptop = 0;
    int jumlah_laptop2 = 0;
    int jumlah_laptop3 = 0;
    int Total_laptop1;
    int Total_harga1;
    int Total_laptop;
    int Total_harga;
    int jumlah_input;
    std::string keputusan;

    std::string laptop1 = "ASUS VIVOBOOK 15 X1502ZA-BQ111W === 5.000.000";
    std::string laptop2 = "ROG STRIX G15 G513IH-HN004W === 15.000.000";
    std::string laptop3 = "HP ELITEBOOK 840 G3 === 10.000.000";

    std::cout << "====== SELAMAT DATANG DI TOKO LAPTOP KAMI ======" << std::endl
              << std::endl;
    std::cout << "1. " << laptop1 << std::endl;
    std::cout << "2. " << laptop2 << std::endl;
    std::cout << "3. " << laptop3 << std::endl
              << std::endl;

    std::cout << "Masukkan nomor laptop yang ingin anda beli: ";
    std::cin >> nomor_laptop;

    if (nomor_laptop == 1)
    {
        std::cout << "Jumlah laptop yang ingin anda beli:       : ";
        std::cin >> jumlah_laptop;
    }
    else if (nomor_laptop == 2)
    {
        std::cout << "Jumlah laptop yang ingin anda beli:       : ";
        std::cin >> jumlah_laptop2;
    }
    else if (nomor_laptop == 3)
    {
        std::cout << "Jumlah laptop yang ingin anda beli       : ";
        std::cin >> jumlah_laptop3;
    }
    else
    {
        std::cout << "Nomor laptop yang anda masukkan salah!" << std::endl;
    }

    Total_laptop1 = jumlah_laptop + jumlah_laptop2 + jumlah_laptop3;
    Total_harga1 = (jumlah_laptop * 5000000) + (jumlah_laptop2 * 15000000) + (jumlah_laptop3 * 10000000);

    do
    {
        std::cout << "Apakah anda ingin membeli laptop lain ?     ";
        std::cin >> keputusan;

        if (keputusan == "ya")
        {
            std::cout << "Masukkan nomor laptop yang ingin anda beli: ";
            std::cin >> nomor_laptop;

            if (nomor_laptop == 1)
            {
                std::cout << "Jumlah laptop yang ingin anda beli        : ";
                std::cin >> jumlah_input;
                jumlah_laptop += jumlah_input;
            }
            else if (nomor_laptop == 2)
            {
                std::cout << "Jumlah laptop yang ingin anda beli        : ";
                std::cin >> jumlah_input;
                jumlah_laptop2 += jumlah_input;
            }
            else if (nomor_laptop == 3)
            {
                std::cout << "Jumlah laptop yang ingin anda beli        : ";
                std::cin >> jumlah_input;
                jumlah_laptop3 += jumlah_input;
            }
            else
            {
                std::cout << "Nomor laptop yang anda masukkan salah!" << std::endl;
            }
        }
        else
        {
        }
    } while (keputusan == "ya");

    Total_laptop = jumlah_laptop + jumlah_laptop2 + jumlah_laptop3;
    Total_harga = (jumlah_laptop * 5000000) + (jumlah_laptop2 * 15000000) + (jumlah_laptop3 * 10000000);

    if (Total_harga1 <= 50000000)
    {
        Total_harga1 = Total_harga1 - (Total_harga1 * 0.05);
    }
    else if (Total_harga1 > 50000000)
    {
        Total_harga1 = Total_harga1 - (Total_harga1 * 0.1);
    }
    else
    {
    }

    if (Total_harga <= 50000000)
    {
        Total_harga = Total_harga - (Total_harga * 0.05);
    }
    else if (Total_harga > 50000000)
    {
        Total_harga = Total_harga - (Total_harga * 0.1);
    }
    else
    {
    }

    if (keputusan == "tidak")
    {
        std::cout << "                         ADIT COMPUTER           " << '\n';
        std::cout << "                     Taman Pondok Jati An-09     " << '\n';
        std::cout << "====================================================================" << '\n';
        std::cout << "                          CASH RECEIPT          " << '\n';
        std::cout << "====================================================================" << '\n';
        std::cout << "deskripsi                            jumlah                harga" << '\n';

        if (jumlah_laptop > 0)
        {
            std::cout << "ASUS VIVOBOOK 15 X1502ZA-BQ111W" << "        " << jumlah_laptop << "                  " << jumlah_laptop * 5000000 << '\n';
        }
        if (jumlah_laptop2 > 0)
        {
            std::cout << "ROG STRIX G15 G513IH-HN004W" << "            " << jumlah_laptop2 << "                  " << jumlah_laptop2 * 15000000 << '\n';
        }
        if (jumlah_laptop3 > 0)
        {
            std::cout << "HP ELITEBOOK 840 G3" << "                    " << jumlah_laptop3 << "                  " << jumlah_laptop3 * 10000000 << '\n';
        }

        std::cout << "====================================================================" << '\n';
         std::cout << "Total                                  " << Total_laptop << "                  " << Total_harga << '\n';
        std::cout << "====================================================================" << '\n';
    }
    else
    {
        std::cout << "                         ADIT COMPUTER           " << '\n';
        std::cout << "                     Taman Pondok Jati An-09     " << '\n';
        std::cout << "====================================================================" << '\n';
        std::cout << "                          CASH RECEIPT          " << '\n';
        std::cout << "====================================================================" << '\n';
        std::cout << "deskripsi                            jumlah                harga" << '\n';

        if (jumlah_laptop > 0)
        {
            std::cout << "ASUS VIVOBOOK 15 X1502ZA-BQ111W" << "        " << jumlah_laptop << "                  " << jumlah_laptop * 5000000 << '\n';
        }
        if (jumlah_laptop2 > 0)
        {
            std::cout << "ROG STRIX G15 G513IH-HN004W" << "            " << jumlah_laptop2 << "                  " << jumlah_laptop2 * 15000000 << '\n';
        }
        if (jumlah_laptop3 > 0)
        {
            std::cout << "HP ELITEBOOK 840 G3" << "                    " << jumlah_laptop3 << "                  " << jumlah_laptop3 * 10000000 << '\n';
        }

        std::cout << "====================================================================" << '\n';
        std::cout << "Total                                  " << Total_laptop << "                  " << Total_harga << '\n';
        std::cout << "====================================================================" << '\n';
    }

    std::cout << "             Terima kasih telah berbelanja di toko kami!" << std::endl;

    return 0;
}