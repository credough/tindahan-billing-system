#include<stdio.h>
#include<math.h>

void printReceipt(int many, int manyFries, int manySoda, int manyPizza, int manyIcecream, double totalAmount1, double totalAmount2, double totalAmount3, double totalAmount4, double totalAmount5) {
printf("\n=====================================\n");
    if (many > 0) {
        printf("%d pcs of burgers - %.2lf\n", many, totalAmount1);
    }
    if (manyFries > 0) {
        printf("%d pcs of Fries - %.2lf\n", manyFries, totalAmount2);
    }
    if (manySoda > 0) {
        printf("%d pcs of Soda - %.2lf\n", manySoda, totalAmount3);
    }
    if (manyPizza > 0) {
        printf("%d pcs of Pizza - %.2lf\n", manyPizza, totalAmount4);
    }
    if (manyIcecream > 0) {
        printf("%d pcs of Icecream - %.2lf\n", manyIcecream, totalAmount5);
    }
    printf("\n=====================================\n");
}

void printCart(int many, int manyFries, int manySoda, int manyPizza, int manyIcecream, double totalAmount1, double totalAmount2, double totalAmount3, double totalAmount4, double totalAmount5) {

    if (many > 0) {
        printf("%d pcs of burgers - %.2lf\n", many, totalAmount1);
    }
    if (manyFries > 0) {
        printf("%d pcs of Fries - %.2lf\n", manyFries, totalAmount2);
    }
    if (manySoda > 0) {
        printf("%d pcs of Soda - %.2lf\n", manySoda, totalAmount3);
    }
    if (manyPizza > 0) {
        printf("%d pcs of Pizza - %.2lf\n", manyPizza, totalAmount4);
    }
    if (manyIcecream > 0) {
        printf("%d pcs of Icecream - %.2lf\n", manyIcecream, totalAmount5);

    }

}

double vouchers(double cart, int voucher) {
    if (voucher == 1 && cart >= 200) {
        return cart * 0.02;
    } else if (voucher == 2 && cart >= 500) {
        return cart * 0.05;
    } else if (voucher == 3 && cart >= 700) {
        return cart * 0.07;
    } else if (voucher == 4 && cart >= 1000) {
        return cart * 0.08;
    } else if (voucher == 5 && cart >= 1500) {
        return cart * 0.09;
    } else {
        printf("Voucher Not Available.\n");
        return -1;
    }
}

void printVouchers(double cart) {

    if (cart >= 200) {
        printf("1. GASTOSMOTOL 2 percent OFF (Min. Spend 200)\n");
    }
    if (cart >= 500) {
        printf("2. PANTROPA 5 percent OFF (Min. Spend of 500)\n");
    }
    if (cart >= 700) {
        printf("3. PAMPAMILYA 7 percent OFF (Min. Spend of 700)\n");
    }
    if (cart >= 1000) {
        printf("4. BURGIS 8 percent OFF (Min. Spend of 1000)\n");
    }
    if (cart >= 1500) {
        printf("5. YAMAN 9 percent OFF (Min. Spend of 1500)\n");
    }
    printf("\n=====================================\n");
}
void printOrigReceipt(int many, int manyFries, int manySoda, int manyPizza, int manyIcecream, double totalAmount1, double totalAmount2, double totalAmount3, double totalAmount4, double totalAmount5, double discount, double cart, double vat) {
    printf("\n======================RECEIPT=======================\n");
    printf("\n");
    printf("Credo's Food Stall\n");
    printf("6554 L. Bernardino St. Gen. T. De Leon\n");
    printf("\n");
    printf("\n====================================================\n");
    printf("Your Orders:\n");
    printf("\n");
    printf("    Type-------------Pieces--------------Price    \n");
    if (many > 0) {
        printf("• BURGERS -------------%d--------------%.2lf\n", many, totalAmount1);
    } else {
        printf("\n");
    }
    if (manyFries > 0) {
        printf("• FRIES ---------------%d------------- %.2lf\n", manyFries, totalAmount2);
    } else {
        printf("\n");
    }
    if (manySoda > 0) {
        printf("• SODA ----------------%d-------------- %.2lf\n", manySoda, totalAmount3);
    } else {
        printf("\n");
    }
    if (manyPizza > 0) {
        printf("• PIZZA ---------------%d--------------- %.2lf\n", manyPizza, totalAmount4);
    } else {
        printf("\n");
    }
    if (manyIcecream > 0) {
        printf("• ICECREAM ------------%d--------------- %.2lf\n", manyIcecream, totalAmount5);
    } else {
        printf("\n");
    }
    printf("\n====================================================\n");
    printf("\n");
    printf("DISCOUNT                                  %.2lf\n", discount);
    printf("VAT                                       %.2lf\n", vat);
    printf("TOTA                                      %.2lf\n", cart);
    printf("\n");
printf("\n====================================================\n");
}

void printMenu() {
    printf("1. Burger - Php 120.00\n");
    printf("2. Fries - Php 50.00\n");
    printf("3. Soda - Php 30.00\n");
    printf("4. Pizza - Php 200.00\n");
    printf("5. Icecream - Php 60.00\n");
}
int main()
{
    int choose, choose2;
    int many = 0;
    int manyFries = 0;
    int manySoda = 0;
    int manyPizza = 0;
    int manyIcecream = 0;
    double burger = 120.00;
    double Fries = 50.00;
    double Soda = 30.00;
    double Pizza = 200.00;
    double Icecream = 60.00;
    double totalAmount1 = 0;
    double totalAmount2 = 0;
    double totalAmount3 = 0;
    double totalAmount4 = 0;
    double totalAmount5 = 0;
    double cart = 0;
    double discount = 0;
    double vat = 0.025;
    int vouch;
    int voucher;
    int receipt;

    printf("Welcome to our tusok tusok stall!\n");

    while (1) {
        printf("\n");
        printf("Choose your food: (No double orders for same products)\n");

        printMenu();
        scanf("%d", &choose);
        if (choose == 1) {
            printf("How many pcs?\n");
            scanf("%d", &many);
            totalAmount1 = many*burger;
            printf("Total Amount: %.2lf\n", totalAmount1);
            printf("Add To Cart (0) Proceed to Orders (1)\n");
            scanf("%d", &choose2);
            printf("\n-------------------\n");
            printf("\n");
            printf("Your Cart:\n");
            printCart(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
            printf("\n-------------------\n");
            printf("\n");
            if (choose2 == 1) {
            printf("\n=====================================\n");
                printf("Your orders:\n");
                cart += totalAmount1;
                printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                printf("Your Overall Total: %.2lf\n", cart);
                printf("\n=====================================\n");


                if (cart >= 200) {
                    printf("\n");
                    printf("Congratulations! You have a voucher. Want to claim it? (yes - 1 no - 0)\n");
                    scanf("%d", &vouch);
                    if (vouch == 1) {
                    printf("\n=====================================\n");
                        printf("Available Vouchers:\n");
                        printf("\n");
                        printVouchers(cart);
                        scanf("%d", &voucher);
                        double discountValue = vouchers(cart, voucher);
                        while (discountValue == -1) {
                            printf("Please enter a valid voucher number:\n");
                            scanf("%d", &voucher);
                            discountValue = vouchers(cart, voucher);
                        }
                        printf("\n");

                        cart -= vouchers(cart, voucher);
                        vat *= cart;
                        cart += vat;


                        printf("Amount Discounted: %.2lf\n", vouchers(cart, voucher));
                        printf("Value Added Tax: %.2lf\n", vat);
                        printf("Your New Total Discounted Price: %.2lf\n", cart);

                        printf("\n Want a receipt? (yes - 1 no - 0)\n");
                        scanf("%d", &receipt);
                        if (receipt == 1) {
                            discount = vouchers(cart, voucher);
                            printOrigReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5, discount, cart, vat);
                        } else {
                            printf("Thanks For Orders!\n");
                        }

                        break;

                    } else {
                        printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                        printf("\n");
                        printf("Your Overall Total: %.2lf\n", cart);
                        break;
                    }

                }
            } else {
                cart += totalAmount1;
                continue;
            }
        } else if (choose == 2) {
            printf("How many pcs?\n");
            scanf("%d", &manyFries);
            totalAmount2 = manyFries*Fries;
            printf("Total Amount: %.2lf\n", totalAmount2);
            printf("Add To Cart (0) Proceed to Orders (1)\n");
            scanf("%d", &choose2);
            printf("\n-------------------\n");
            printf("\n");
            printf("Your Cart:\n");
            printCart(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
            printf("\n-------------------\n");
            printf("\n");
            if (choose2 == 1) {
            printf("\n=====================================\n");
                printf("Your orders:\n");
                cart += totalAmount2;
                printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                printf("Your Overall Total: %.2lf\n", cart);
                printf("\n=====================================\n");

                if (cart >= 200) {
                    printf("\n");
                    printf("Congratulations! You have a voucher. Want to claim it? (yes - 1 no - 0)\n");
                    scanf("%d", &vouch);
                    if (vouch == 1) {
                    printf("\n=====================================\n");
                        printf("Available Vouchers\n");
                        printf("\n");
                        printVouchers(cart);
                        scanf("%d", &voucher);
                        double discountValue = vouchers(cart, voucher);
                        while (discountValue == -1) {
                            printf("Please enter a valid voucher number:\n");
                            scanf("%d", &voucher);
                            discountValue = vouchers(cart, voucher);
                        }
                        printf("\n");

                        cart -= vouchers(cart, voucher);
                        vat *= cart;
                        cart += vat;

                        printf("Amount Discounted: %.2lf\n", vouchers(cart, voucher));
                        printf("Value Added Tax: %.2lf\n", vat);
                        printf("Your New Total Discounted Price: %.2lf\n", cart);

                        printf("\n Want a receipt? (yes - 1 no - 0)\n");
                        scanf("%d", &receipt);
                        if (receipt == 1) {
                            discount = vouchers(cart, voucher);
                            printOrigReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5, discount, cart, vat);
                        } else {
                            printf("Thanks For Orders!\n");
                        }

                        break;

                    } else {
                        printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                        printf("\n");
                        printf("Your Overall Total: %.2lf\n", cart);
                        break;
                    }
                }
            } else {
                cart += totalAmount3;
                continue;
            }
        } else if (choose == 3) {
            printf("How many pcs?\n");
            scanf("%d", &manySoda);
            totalAmount3 = manySoda*Soda;
            printf("Total Amount: %.2lf\n", totalAmount3);
            printf("Add To Cart (0) Proceed to Orders (1)\n");
            scanf("%d", &choose2);
            printf("\n-------------------\n");
            printf("\n");
            printf("Your Cart:\n");
            printCart(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
            printf("\n-------------------\n");
            printf("\n");
            if (choose2 == 1) {
            printf("\n=====================================\n");
                printf("Your orders:\n");
                cart += totalAmount3;
                printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                printf("Your Overall Total: %.2lf\n", cart);
                printf("\n=====================================\n");

                if (cart >= 200) {
                    printf("\n");
                    printf("Congratulations! You have a voucher. Want to claim it? (yes - 1 no - 0)\n");
                    scanf("%d", &vouch);
                    if (vouch == 1) {
                    printf("\n=====================================\n");
                        printf("Available Vouchers\n");
                        printf("\n");
                        printVouchers(cart);
                        scanf("%d", &voucher);
                        double discountValue = vouchers(cart, voucher);
                        while (discountValue == -1) {
                            printf("Please enter a valid voucher number:\n");
                            scanf("%d", &voucher);
                            discountValue = vouchers(cart, voucher);
                        }
                        printf("\n");

                        cart -= vouchers(cart, voucher);
                        vat *= cart;
                        cart += vat;


                        printf("Amount Discounted: %.2lf\n", vouchers(cart, voucher));
                        printf("Value Added Tax: %.2lf\n", vat);
                        printf("Your New Total Discounted Price: %.2lf\n", cart);

                        printf("\n Want a receipt? (yes - 1 no - 0)\n");
                        scanf("%d", &receipt);
                        if (receipt == 1) {
                            discount = vouchers(cart, voucher);
                            printOrigReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5, discount, cart, vat);
                        } else {
                            printf("Thanks For Orders!\n");
                        }

                        break;

                    } else {
                        printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                        printf("\n");
                        printf("Your Overall Total: %.2lf\n", cart);
                        break;
                    }
                }
            } else {
                cart += totalAmount3;
                continue;
            }
        } else if (choose == 4) {
            printf("How many pcs?\n");
            scanf("%d", &manyPizza);
            totalAmount4 = manyPizza*Pizza;
            printf("Total Amount: %.2lf\n", totalAmount4);
            printf("Add To Cart (0) Proceed to Orders (1)\n");
            scanf("%d", &choose2);
            printf("\n-------------------\n");
            printf("\n");
            printf("Your Cart:\n");
            printCart(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
            printf("\n-------------------\n");
            printf("\n");
            if (choose2 == 1) {
            printf("\n=====================================\n");
                printf("Your orders:\n");
                cart += totalAmount4;
                printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1, totalAmount2, totalAmount3, totalAmount4, totalAmount5);
                printf("Your Overall Total: %.2lf\n", cart);
                printf("\n=====================================\n");

                if (cart >= 200) {
                    printf("\n");
                    printf("Congratulations! You have a voucher. Want to claim it? (yes - 1 no - 0)\n");
                    scanf("%d", &vouch);
                    if (vouch == 1) {
                    printf("\n=====================================\n");
                        printf("Available Vouchers\n");
                        printf("\n");
                        printVouchers(cart);
                        scanf("%d", &voucher);
                        double discountValue = vouchers(cart, voucher);
                        while (discountValue == -1) {
                            printf("Please enter a valid voucher number:\n");
                            scanf("%d", &voucher);
                            discountValue = vouchers(cart, voucher);
                        }
                        printf("\n");

                        cart -= vouchers(cart, voucher);
                        vat *= cart;
                        cart += vat;


                        printf("Amount Discounted: %.2lf\n", vouchers(cart, voucher));
                        printf("Value Added Tax: %.2lf\n", vat);
                        printf("Your New Total Discounted Price: %.2lf\n", cart);

                        printf("\n Want a receipt? (yes - 1 no - 0)\n");
                        scanf("%d", &receipt);
                        if (receipt == 1) {
                            discount = vouchers(cart, voucher);
                            printOrigReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5, discount, cart, vat);
                        } else {
                            printf("Thanks For Orders!\n");
                        }

                        break;

                    } else {
                        printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                        printf("\n");
                        printf("Your Overall Total: %.2lf\n", cart);
                        break;
                    }
                }
            } else {
                cart += totalAmount4;
                continue;
            }
        } else if (choose == 5) {
            printf("How many pcs?\n");
            scanf("%d", &manyIcecream);
            totalAmount5 = manyIcecream*Icecream;
            printf("Total Amount: %.2lf\n", totalAmount5);
            printf("Add To Cart (0) Proceed to Orders (1)\n");
            scanf("%d", &choose2);
            printf("\n-------------------\n");
            printf("\n");
            printf("Your Cart:\n");
            printCart(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
            printf("\n-------------------\n");
            printf("\n");
            if (choose2 == 1) {
            printf("\n=====================================\n");
                printf("Your orders:\n");
                cart += totalAmount5;
                printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1, totalAmount2, totalAmount3, totalAmount4, totalAmount5);

                printf("Your Overall Total: %.2lf\n", cart);
                printf("\n=====================================\n");

                if (cart >= 200) {
                    printf("\n");
                    printf("Congratulations! You have a voucher. Want to claim it? (yes - 1 no - 0)\n");
                    scanf("%d", &vouch);
                    if (vouch == 1) {
                    printf("\n=====================================\n");
                        printf("Available Vouchers\n");
                       printf("\n");
                        printVouchers(cart);
                        scanf("%d", &voucher);
                        double discountValue = vouchers(cart, voucher);
                        while (discountValue == -1) {
                            printf("Please enter a valid voucher number:\n");
                            scanf("%d", &voucher);
                            discountValue = vouchers(cart, voucher);
                        }
                        printf("\n");

                        cart -= vouchers(cart, voucher);
                        vat *= cart;
                        cart += vat;


                        printf("Amount Discounted: %.2lf\n", vouchers(cart, voucher));
                        printf("Value Added Tax: %.2lf\n", vat);
                        printf("Your New Total Discounted Price: %.2lf\n", cart);

                        printf("\n Want a receipt? (yes - 1 no - 0)\n");
                        scanf("%d", &receipt);
                        if (receipt == 1) {
                            discount = vouchers(cart, voucher);
                            printOrigReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5, discount, cart, vat);
                        } else {
                            printf("Thanks For Orders!\n");
                        }

                        break;

                    } else {
                        printReceipt(many, manyFries, manySoda, manyPizza, manyIcecream, totalAmount1,totalAmount2, totalAmount3, totalAmount4, totalAmount5 );
                        printf("\n");
                        printf("Your Overall Total: %.2lf\n", cart);
                        break;
                    }
                }
            } else {
                cart += totalAmount5;
                continue;
            }
        }
    }
    return 0;
}
