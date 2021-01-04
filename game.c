// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on January 2020
// This program shows a SplashScreen

#include <gb/gb.h>
#include <stdio.h>
#include "mario_data.c"
#include "mario_map.c"

void main() {
    set_bkg_data(0, 114, mario_data);
    set_bkg_tiles(0, 0, 20, 18, mario_map);

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    printf("START OF MY GAME");
}
