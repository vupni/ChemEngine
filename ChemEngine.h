#pragma once
#include <iostream>
#include <string>
#include <cwchar>

#include <locale>

class ChemicalElements {
    ChemicalElements() = delete;

public:
    //returns the atomic weight of a certain element based on the letters that represent the said element in the periodic table 
    static double AtomicWeightLetters(const char& first, const char& second) {
        switch (first) {
        case 'A': {
            switch (second) {
            case 'c': return 227; // Ac - Actinium
            case 'g': return 107.87; // Ag - Silver
            case 'l': return 26.982; // Al - Aluminium
            case 'm': return 243; // Am - Americium
            case 'r': return 39.948; // Ar - Argon
            case 's': return 74.922; // As - Arsenic
            case 't': return 210; // At - Astatine
            case 'u': return 196.97; // Au - Gold
            }
        }
        case 'B': {
            switch (second) {
            case 0: return 10.81; // B - Boron
            case 'a': return 137.33; // Ba - Barium
            case 'e': return 9.0122; // Be - Beryllium
            case 'h': return 107; // Bh - Bohrium
            case 'i': return 270; // Bi - Bismuth
            case 'k': return 247; // Bk - Berkelium
            case 'r': return 79.904; // Br - Bromine
            }
        }
        case 'C': {
            switch (second) {
            case 0: return 12.011; // C - Carbon
            case 'a': return 40.078; // Ca - Calcium
            case 'd': return 112.41; // Cd - Cadmium
            case 'e': return 140.12; // Ce - Cerium
            case 'f': return 251; // Cf - Californium
            case 'l': return 35.453; // Cl - Chlorine
            case 'm': return 247; // Cm - Curium
            case 'n': return 285; // Cn - Copernicium
            case 'o': return 58.933; // Co - Cobalt
            case 'r': return 51.996; // Cr - Chromium
            case 's': return 132.91; // Cs - Caesium
            case 'u': return 63.546; // Cu - Copper
            }
        }
        case 'D': {
            switch (second) {
            case 'b': return 268;  // Db - Dubnium
            case 's': return 281;  // Ds - Darmstadtium
            case 'y': return 162.50;  // Dy - Dysprosium
            }
        }
        case 'E': {
            switch (second) {
            case 'r': return 167.26; // Er - Erbium
            case 's': return 252; // Es - Einsteinium
            case 'u': return 151.96; // Eu - Europium
            }
        }
        case 'F': {
            switch (second) {
            case 0: return 18.998; // F - Fluorine
            case 'e': return 55.845; // Fe - Iron
            case 'l': return 289; // Fl - Flerovium
            case 'm': return 257; // Fm - Fermium
            case 'r': return 223; // Fr - Francium
            }
        }
        case 'G': {
            switch (second) {
            case 'a': return 69.723; // Ga - Gallium
            case 'd': return 157.25; // Gd - Gadolinium
            case 'e': return 72.630; // Ge - Germanium
            }
        }
        case 'H': {
            switch (second) {
            case 0: return 1.008; // H - Hydrogen
            case 'e': return 4.0026; // He - Helium
            case 'f': return 178.49; // Hf - Hafnium
            case 'g': return 200.59; // Hg - Mercury
            case 'o': return 164.93; // Ho - Holmium
            case 's': return 277; // Hs - Hassium
            }
        }
        case 'I': {
            switch (second) {
            case 0: return 126.90; // I - Iodine
            case 'n': return 114.82;  // In - Indium
            case 'r': return 192.22; // Ir - Iridium
            }
        }
        case 'K': {
            switch (second) {
            case 0: return 39.098; // K - Potassium
            case 'r': return 83.798; // Kr - Krypton
            }
        }
        case 'L': {
            switch (second) {
            case 'a': return 138.91; // La - Lanthanum
            case 'i': return 6.94; // Li - Lithium
            case 'r': return 266; // Lr - Lawrencium
            case 'u': return 174.97; // Lu - Lutetium
            case 'v': return 293; // Lv - Livermorium
            }
        }
        case 'M': {
            switch (second) {
            case 'c': return 290; // Mc - Moscovium
            case 'd': return 258; // Md - Mendelevium
            case 'g': return 24.305; // Mg - Magnesium
            case 'n': return 54.938; // Mn - Manganese
            case 'o': return 95.95; // Mo - Molybdenum
            case 't': return 278; // Mt - Meitnerium
            }
        }
        case 'N': {
            switch (second) {
            case 0: return 14.007; // N - Nitrogen
            case 'a': return 22.990; // Na - Sodium
            case 'b': return 92.906; // Nb - Niobium
            case 'd': return 144.24; // Nd - Neodymium
            case 'e': return 20.180; // Ne - Neon
            case 'h': return 286; // Nh - Nihonium
            case 'i': return 58.693; // Ni - Nickel
            case 'o': return 259; // No - Nobelium
            case 'p': return 237; // Np - Neptunium
            }
        }
        case 'O': {
            switch (second) {
            case 0: return 15.999; // O - Oxygen
            case 'g': return 294; // Og - Oganesson
            case 's': return 190.23; // Os - Osmium
            }
        }
        case 'P': {
            switch (second) {
            case 0: return 30.974; // P - Phosphorus
            case 'a': return 231.04; // Pa - Protactinium
            case 'b': return 207.2; // Pb - Lead
            case 'd': return 106.42; // Pd - Palladium
            case 'm': return 145; // Pm - Promethium
            case 'o': return 209; // Po - Polonium
            case 'r': return 140.91; // Pr - Praseodymium
            case 't': return 195.08; // Pt - Platinum
            case 'u': return 244; // Pu - Plutonium
            }
        }
        case 'R': {
            switch (second) {
            case 'a': return 226; // Ra - Radium
            case 'b': return 85.468; // Rb - Rubidium
            case 'e': return 186.21; // Re - Rhenium
            case 'f': return 267; // Rf - Rutherfordium
            case 'g': return 282; // Rg - Roentgenium
            case 'h': return 102.91; // Rh - Rhodium
            case 'n': return 222; // Rn - Radon
            case 'u': return 101.07; // Ru - Ruthenium
            }
        }
        case 'S': {
            switch (second) {
            case 0: return 32.06; // S - Sulfur
            case 'b': return 121.76; // Sb - Antimony
            case 'c': return 44.956; // Sc - Scandium
            case 'e': return 78.971; // Se - Selenium
            case 'g': return 269; // Sg - Seaborgium
            case 'i': return 28.085; // Si - Silicon
            case 'm': return 150.36; // Sm - Samarium
            case 'n': return 118.71; // Sn - Tin
            case 'r': return 87.62; // Sr - Strontium
            }
        }
        case 'T': {
            switch (second) {
            case 'a': return 180.95; // Ta - Tantalum
            case 'b': return 158.93; // Tb - Terbium
            case 'c': return 98; // Tc - Technetium
            case 'e': return 127.60; // Te - Tellurium
            case 'h': return 232.04; // Th - Thorium 
            case 'i': return 47.867; // Ti - Titanium
            case 'l': return 204.38; // Tl - Thallium
            case 'm': return 168.93; // Tm - Thulium
            case 's': return 294; // Ts - Tennessine
            }
        }
        case 'U': {
            switch (second) {
            case 0: return 238.03; // U - Uranium
            }
        }
        case 'V': {
            switch (second) {
            case 0: return 50.942; // V - Vanadium
            }
        }
        case 'W': {
            switch (second) {
            case 0: return 183.84; // W - Tungsten
            }
        }
        case 'X': {
            switch (second) {
            case 'e': return 131.29; // Xe - Xenon
            }
        }
        case 'Y': {
            switch (second) {
            case 0: return 88.906; // Y - Yttrium
            case 'b': return 173.05; // Yb - Ytterbium
            }
        }
        case 'Z': {
            switch (second) {
            case 'n': return 65.38; // Zn - Zinc
            case 'r': return 91.224; // Zr - Zirconium
            }
        }
        }
        ErrorPrintChemical();
        std::cout << "couldn't find the right provided element" << std::endl;
        return -1;
    }
    //returns the number of a certain element based on the letters that represent the said element in the periodic table 
    static short ElementLettersToNumber(const char& first, const char& second) {
        switch (first) {
        case 'A': {
            switch (second) {
            case 'c': return Actinium; // Ac - Actinium
            case 'g': return Silver; // Ag - Silver
            case 'l': return Aluminum; // Al - Aluminum
            case 'm': return Americium; // Am - Americium
            case 'r': return Argon; // Ar - Argon
            case 's': return Arsenic; // As - Arsenic
            case 't': return Astatine; // At - Astatine
            case 'u': return Gold; // Au - Gold
            }
        }
        case 'B': {
            switch (second) {
            case 0: return Boron; // B - Boron
            case 'a': return Barium; // Ba - Barium
            case 'e': return Beryllium; // Be - Beryllium
            case 'h': return Bohrium; // Bh - Bohrium
            case 'i': return Bismuth; // Bi - Bismuth
            case 'k': return Berkelium; // Bk - Berkelium
            case 'r': return Bromine; // Br - Bromine
            }
        }
        case 'C': {
            switch (second) {
            case 0: return Carbon; // C - Carbon
            case 'a': return Calcium; // Ca - Calcium
            case 'd': return Cadmium; // Cd - Cadmium
            case 'e': return Cerium; // Ce - Cerium
            case 'f': return Californium; // Cf - Californium
            case 'l': return Chlorine; // Cl - Chlorine
            case 'm': return Curium; // Cm - Curium
            case 'n': return Copernicium; // Cn - Copernicium
            case 'o': return Cobalt; // Co - Cobalt
            case 'r': return Chromium; // Cr - Chromium
            case 's': return Caesium; // Cs - Caesium
            case 'u': return Copper; // Cu - Copper
            }
        }
        case 'D': {
            switch (second) {
            case 'b': return Dubnium;  // Db - Dubnium
            case 's': return Darmstadtium;  // Ds - Darmstadtium
            case 'y': return Dysprosium;  // Dy - Dysprosium
            }
        }
        case 'E': {
            switch (second) {
            case 'r': return Erbium; // Er - Erbium
            case 's': return Einsteinium; // Es - Einsteinium
            case 'u': return Europium; // Eu - Europium
            }
        }
        case 'F': {
            switch (second) {
            case 0: return Fluorine; // F - Fluorine
            case 'e': return Iron; // Fe - Iron
            case 'l': return Flerovium; // Fl - Flerovium
            case 'm': return Fermium; // Fm - Fermium
            case 'r': return Francium; // Fr - Francium
            }
        }
        case 'G': {
            switch (second) {
            case 'a': return Gallium; // Ga - Gallium
            case 'd': return Gadolinium; // Gd - Gadolinium
            case 'e': return Germanium; // Ge - Germanium
            }
        }
        case 'H': {
            switch (second) {
            case 0: return Hydrogen; // H - Hydrogen
            case 'e': return Helium; // He - Helium
            case 'f': return Hafnium; // Hf - Hafnium
            case 'g': return Mercury; // Hg - Mercury
            case 'o': return Holmium; // Ho - Holmium
            case 's': return Hassium; // Hs - Hassium
            }
        }
        case 'I': {
            switch (second) {
            case 0: return Iodine; // I - Iodine
            case 'n': return Indium;  // In - Indium
            case 'r': return Iridium; // Ir - Iridium
            }
        }
        case 'K': {
            switch (second) {
            case 0: return Potassium; // K - Potassium
            case 'r': return Krypton; // Kr - Krypton
            }
        }
        case 'L': {
            switch (second) {
            case 'a': return Lanthanum; // La - Lanthanum
            case 'i': return Lithium; // Li - Lithium
            case 'r': return Lawrencium; // Lr - Lawrencium
            case 'u': return Lutetium; // Lu - Lutetium
            case 'v': return Livermorium; // Lv - Livermorium
            }
        }
        case 'M': {
            switch (second) {
            case 'c': return Moscovium; // Mc - Moscovium
            case 'd': return Mendelevium; // Md - Mendelevium
            case 'g': return Magnesium; // Mg - Magnesium
            case 'n': return Manganese; // Mn - Manganese
            case 'o': return Molybdenum; // Mo - Molybdenum
            case 't': return Meitnerium; // Mt - Meitnerium
            }
        }
        case 'N': {
            switch (second) {
            case 0: return Nitrogen; // N - Nitrogen
            case 'a': return Sodium; // Na - Sodium
            case 'b': return Niobium; // Nb - Niobium
            case 'd': return Neodymium; // Nd - Neodymium
            case 'e': return Neon; // Ne - Neon
            case 'h': return Nihonium; // Nh - Nihonium
            case 'i': return Nickel; // Ni - Nickel
            case 'o': return Nobelium; // No - Nobelium
            case 'p': return Neptunium; // Np - Neptunium
            }
        }
        case 'O': {
            switch (second) {
            case 0: return Oxygen; // O - Oxygen
            case 'g': return Oganesson; // Og - Oganesson
            case 's': return Osmium; // Os - Osmium
            }
        }
        case 'P': {
            switch (second) {
            case 0: return Phosphorus; // P - Phosphorus
            case 'a': return Protactinium; // Pa - Protactinium
            case 'b': return Lead; // Pb - Lead
            case 'd': return Palladium; // Pd - Palladium
            case 'm': return Promethium; // Pm - Promethium
            case 'o': return Polonium; // Po - Polonium
            case 'r': return Praseodymium; // Pr - Praseodymium
            case 't': return Platinum; // Pt - Platinum
            case 'u': return Plutonium; // Pu - Plutonium
            }
        }
        case 'R': {
            switch (second) {
            case 'a': return Radium; // Ra - Radium
            case 'b': return Rubidium; // Rb - Rubidium
            case 'e': return Rhenium; // Re - Rhenium
            case 'f': return Rutherfordium; // Rf - Rutherfordium
            case 'g': return Roentgenium; // Rg - Roentgenium
            case 'h': return Rhodium; // Rh - Rhodium
            case 'n': return Radon; // Rn - Radon
            case 'u': return Ruthenium; // Ru - Ruthenium
            }
        }
        case 'S': {
            switch (second) {
            case 0: return Sulfur; // S - Sulfur
            case 'b': return Antimony; // Sb - Antimony
            case 'c': return Scandium; // Sc - Scandium
            case 'e': return Selenium; // Se - Selenium
            case 'g': return Seaborgium; // Sg - Seaborgium
            case 'i': return Silicon; // Si - Silicon
            case 'm': return Samarium; // Sm - Samarium
            case 'n': return Tin; // Sn - Tin
            case 'r': return Strontium; // Sr - Strontium
            }
        }
        case 'T': {
            switch (second) {
            case 'a': return Tantalum; // Ta - Tantalum
            case 'b': return Terbium; // Tb - Terbium
            case 'c': return Technetium; // Tc - Technetium
            case 'e': return Tellurium; // Te - Tellurium
            case 'h': return Thorium; // Th - Thorium 
            case 'i': return Titanium; // Ti - Titanium
            case 'l': return Thallium; // Tl - Thallium
            case 'm': return Thulium; // Tm - Thulium
            case 's': return Tennessine; // Ts - Tennessine
            }
        }
        case 'U': {
            switch (second) {
            case 0: return Uranium; // U - Uranium
            }
        }
        case 'V': {
            switch (second) {
            case 0: return Vanadium; // V - Vanadium
            }
        }
        case 'W': {
            switch (second) {
            case 0: return Tungsten; // W - Tungsten
            }
        }
        case 'X': {
            switch (second) {
            case 'e': return Xenon; // Xe - Xenon
            }
        }
        case 'Y': {
            switch (second) {
            case 0: return Yttrium; // Y - Yttrium
            case 'b': return Ytterbium; // Yb - Ytterbium
            }
        }
        case 'Z': {
            switch (second) {
            case 'n': return Zinc; // Zn - Zinc
            case 'r': return Zirconium; // Zr - Zirconium
            }
        }
        }
        ErrorPrintChemical();
        std::cout << "couldn't find the right provided element" << std::endl;
        return -1;
    }
    //returns the name of a certain element based on the letters that represent the said element in the periodic table 
    //takes a language from the Language enum (thats why it's an unsigned short) and returns the element's name in this specific language
    static const wchar_t* ElementNameLetters(const char& first, const char& second, const unsigned short& lang) {
        short num = ElementLettersToNumber(first, second);
        return ElementNameNumber(num, lang);
    }

    //returns the atomic weight of a certain element based on the number of the element
    static double AtomicWeightNumber(const short& elementNum) {
        switch (elementNum) {
        case Hydrogen: return 1.008;
        case Helium: return 4.0026;
        case Lithium: return 6.94;
        case Beryllium: return 9.0122;
        case Boron: return 10.81;
        case Carbon: return 12.011;
        case Nitrogen: return 14.007;
        case Oxygen: return 15.999;
        case Fluorine: return 18.998;
        case Neon: return 20.180;
        case Sodium: return 22.990;
        case Magnesium: return 24.305;
        case Aluminum: return 26.982;
        case Silicon: return 28.085;
        case Phosphorus: return 30.974;
        case Sulfur: return 32.06;
        case Chlorine: return 35.45;
        case Argon: return 39.948;
        case Potassium: return 39.098;
        case Calcium: return 40.078;
        case Scandium: return 44.956;
        case Titanium: return 47.867;
        case Vanadium: return 50.942;
        case Chromium: return 51.996;
        case Manganese: return 54.938;
        case Iron: return 55.845;
        case Cobalt: return 58.933;
        case Nickel: return 58.693;
        case Copper: return 63.546;
        case Zinc: return 65.38;
        case Gallium: return 69.723;
        case Germanium: return 72.630;
        case Arsenic: return 74.922;
        case Selenium: return 78.971;
        case Bromine: return 79.904;
        case Krypton: return 83.798;
        case Rubidium: return 85.468;
        case Strontium: return 87.62;
        case Yttrium: return 88.906;
        case Zirconium: return 91.224;
        case Niobium: return 92.906;
        case Molybdenum: return 95.95;
        case Technetium: return 98;
        case Ruthenium: return 101.07;
        case Rhodium: return 102.91;
        case Palladium: return 106.42;
        case Silver: return 107.87;
        case Cadmium: return 112.41;
        case Indium: return 114.82;
        case Tin: return 118.71;
        case Antimony: return 121.76;
        case Tellurium: return 127.60;
        case Iodine: return 126.90;
        case Xenon: return 131.29;
        case Caesium: return 132.91;
        case Barium: return 137.33;
        case Lanthanum: return 138.91;
        case Cerium: return 140.12;
        case Praseodymium: return 140.91;
        case Neodymium: return 144.24;
        case Promethium: return 145;
        case Samarium: return 150.36;
        case Europium: return 151.96;
        case Gadolinium: return 157.25;
        case Terbium: return 158.93;
        case Dysprosium: return 162.50;
        case Holmium: return 164.93;
        case Erbium: return 167.26;
        case Thulium: return 168.93;
        case Ytterbium: return 173.05;
        case Lutetium: return 174.97;
        case Hafnium: return 178.49;
        case Tantalum: return 180.95;
        case Tungsten: return 183.84;
        case Rhenium: return 186.21;
        case Osmium: return 190.23;
        case Iridium: return 192.22;
        case Platinum: return 195.08;
        case Gold: return 196.97;
        case Mercury: return 200.59;
        case Thallium: return 204.38;
        case Lead: return 207.2;
        case Bismuth: return 208.98;
        case Polonium: return 209;
        case Astatine: return 210;
        case Radon: return 222;
        case Francium: return 223;
        case Radium: return 226;
        case Actinium: return 227;
        case Thorium: return 232.04;
        case Protactinium: return 231.04;
        case Uranium: return 238.03;
        case Neptunium: return 237;
        case Plutonium: return 244;
        case Americium: return 243;
        case Curium: return 247;
        case Berkelium: return 247;
        case Californium: return 251;
        case Einsteinium: return 252;
        case Fermium: return 257;
        case Mendelevium: return 258;
        case Nobelium: return 259;
        case Lawrencium: return 266;
        case Rutherfordium: return 267;
        case Dubnium: return 268;
        case Seaborgium: return 269;
        case Bohrium: return 270;
        case Hassium: return 277;
        case Meitnerium: return 278;
        case Darmstadtium: return 281;
        case Roentgenium: return 282;
        case Copernicium: return 285;
        case Nihonium: return 286;
        case Flerovium: return 289;
        case Moscovium: return 290;
        case Livermorium: return 293;
        case Tennessine: return 294;
        case Oganesson: return 294;
        }
        ErrorPrintChemical();
        std::cout << "couldn't find the right provided element" << std::endl;
        return -1;
    }
    //returns the letters that represent a certain element based on the number of the element
    static const char* ElementNumberToLetters(const short& elementNum) {
        switch (elementNum) {
        case Hydrogen: return "H"; 
        case Helium: return "He"; 
        case Lithium: return "Li";
        case Beryllium: return "Be";
        case Boron: return "B";
        case Carbon: return "C";
        case Nitrogen: return "N";
        case Oxygen: return "O";
        case Fluorine: return "F";
        case Neon: return "Ne";
        case Sodium: return "Na";
        case Magnesium: return "Mg";
        case Aluminum: return "Al";
        case Silicon: return "Si";
        case Phosphorus: return "P";
        case Sulfur: return "S";
        case Chlorine: return "Cl";
        case Argon: return "Ar";
        case Potassium: return "K";
        case Calcium: return "Ca";
        case Scandium: return "Sc";
        case Titanium: return "Ti";
        case Vanadium: return "V";
        case Chromium: return "Cr";
        case Manganese: return "Mn";
        case Iron: return "Fe";
        case Cobalt: return "Co";
        case Nickel: return "Ni";
        case Copper: return "Cu";
        case Zinc: return "Zn";
        case Gallium: return "Ga";
        case Germanium: return "Ge";
        case Arsenic: return "As";
        case Selenium: return "Se";
        case Bromine: return "Br";
        case Krypton: return "Kr";
        case Rubidium: return "Rb";
        case Strontium: return "Sr";
        case Yttrium: return "Y";
        case Zirconium: return "Zr";
        case Niobium: return "Nb";
        case Molybdenum: return "Mo";
        case Technetium: return "Tc";
        case Ruthenium: return "Ru";
        case Rhodium: return "Rh";
        case Palladium: return "Pd";
        case Silver: return "Ag";
        case Cadmium: return "Cd";
        case Indium: return "In";
        case Tin: return "Sn";
        case Antimony: return "Sb";
        case Tellurium: return "Te";
        case Iodine: return "I";
        case Xenon: return "Xe";
        case Caesium: return "Cs";
        case Barium: return "Ba";
        case Lanthanum: return "La";
        case Cerium: return "Ce";
        case Praseodymium: return "Pr";
        case Neodymium: return "Nd";
        case Promethium: return "Pm";
        case Samarium: return "Sm";
        case Europium: return "Eu";
        case Gadolinium: return "Gd";
        case Terbium: return "Tb";
        case Dysprosium: return "Dy";
        case Holmium: return "Ho";
        case Erbium: return "Er";
        case Thulium: return "Tm";
        case Ytterbium: return "Yb";
        case Lutetium: return "Lu";
        case Hafnium: return "Hf";
        case Tantalum: return "Ta";
        case Tungsten: return "W";
        case Rhenium: return "Re";
        case Osmium: return "Os";
        case Iridium: return "Ir";
        case Platinum: return "Pt";
        case Gold: return "Au";
        case Mercury: return "Hg";
        case Thallium: return "Tl";
        case Lead: return "Pb";
        case Bismuth: return "Bi";
        case Polonium: return "Po";
        case Astatine: return "At";
        case Radon: return "Rn";
        case Francium: return "Fr";
        case Radium: return "Ra";
        case Actinium: return "Ac";
        case Thorium: return "Th";
        case Protactinium: return "Pa";
        case Uranium: return "U";
        case Neptunium: return "Np";
        case Plutonium: return "Pu";
        case Americium: return "Am";
        case Curium: return "Cm";
        case Berkelium: return "Bk";
        case Californium: return "Cf";
        case Einsteinium: return "Es";
        case Fermium: return "Fm";
        case Mendelevium: return "Md";
        case Nobelium: return "No";
        case Lawrencium: return "Lr";
        case Rutherfordium: return "Rf";
        case Dubnium: return "Db";
        case Seaborgium: return "Sg";
        case Bohrium: return "Bh";
        case Hassium: return "Hs";
        case Meitnerium: return "Mt";
        case Darmstadtium: return "Ds";
        case Roentgenium: return "Rg";
        case Copernicium: return "Cn";
        case Nihonium: return "Nh";
        case Flerovium: return "Fl";
        case Moscovium: return "Mc";
        case Livermorium: return "Lv";
        case Tennessine: return "Ts";
        case Oganesson: return "Og";
        }
        ErrorPrintChemical();
        std::cout << "couldn't find the right provided element" << std::endl;
        return NULL;
    }
    //returns the name of a certain element based on the number of the element
    //takes a language from the Language enum (thats why it's an unsigned short) and returns the element's name in this specific language
    static const wchar_t* ElementNameNumber(const short& elementNum, const unsigned short& lang) {
        if (lang == Hebrew) {
            EnableHebrew();
        }

        switch (elementNum) {
        case Hydrogen: switch (lang) {
            case Hebrew: return L"מימן";
            case British_English: return L"Hydrogen";
            case US_English: return L"Hydrogen";
        }
        case Helium: switch (lang) {
            case Hebrew: return L"הליום";
            case British_English: return L"Helium";
            case US_English: return L"Helium";
        }
        case Lithium: switch (lang) {
            case Hebrew: return L"ליתיום";
            case British_English: return L"Lithium";
            case US_English: return L"Lithium";
        }
        case Beryllium: switch (lang) {
            case Hebrew: return L"בריליום";
            case British_English: return L"Beryllium";
            case US_English: return L"Beryllium";
        }
        case Boron: switch (lang) {
            case Hebrew: return L"בור";
            case British_English: return L"Boron";
            case US_English: return L"Boron";
        }
        case Carbon: switch (lang) {
            case Hebrew: return L"פחמן";
            case British_English: return L"Carbon";
            case US_English: return L"Carbon";
        }
        case Nitrogen: switch (lang) {
            case Hebrew: return L"חנקן";
            case British_English: return L"Nitrogen";
            case US_English: return L"Nitrogen";
        }
        case Oxygen: switch (lang) {
            case Hebrew: return L"חמצן";
            case British_English: return L"Oxygen";
            case US_English: return L"Oxygen";
        }
        case Fluorine: switch (lang) {
            case Hebrew: return L"פלואור";
            case British_English: return L"Fluorine";
            case US_English: return L"Fluorine";
        }
        case Neon: switch (lang) {
            case Hebrew: return L"ניאון";
            case British_English: return L"Neon";
            case US_English: return L"Neon";
        }
        case Sodium: switch (lang) {
            case Hebrew: return L"נתרן";
            case British_English: return L"Sodium";
            case US_English: return L"Sodium";
        }
        case Magnesium: switch (lang) {
            case Hebrew: return L"מגנזיום";
            case British_English: return L"Magnesium";
            case US_English: return L"Magnesium";
        }
        case Aluminum: switch (lang) {
            case Hebrew: return L"אלומיניום";
            case British_English: return L"Aluminium ";
            case US_English: return L"Aluminum";
        }
        case Silicon: switch (lang) {
            case Hebrew: return L"צורן";
            case British_English: return L"Silicon";
            case US_English: return L"Silicon";
        }
        case Phosphorus: switch (lang) {
            case Hebrew: return L"זרחן";
            case British_English: return L"Phosphorus";
            case US_English: return L"Phosphorus";
        }
        case Sulfur: switch (lang) {
            case Hebrew: return L"גופרית";
            case British_English: return L"Sulphur";
            case US_English: return L"Sulfur";
        }
        case Chlorine: switch (lang) {
            case Hebrew: return L"כלור";
            case British_English: return L"Chlorine";
            case US_English: return L"Chlorine";
        }
        case Argon: switch (lang) {
            case Hebrew: return L"ארגון";
            case British_English: return L"Argon";
            case US_English: return L"Argon";
        }
        case Potassium: switch (lang) {
            case Hebrew: return L"אשלגן";
            case British_English: return L"Potassium";
            case US_English: return L"Potassium";
        }
        case Calcium: switch (lang) {
            case Hebrew: return L"סידן";
            case British_English: return L"Calcium";
            case US_English: return L"Calcium";
        }
        case Scandium: switch (lang) {
            case Hebrew: return L"סקנדיום";
            case British_English: return L"Scandium";
            case US_English: return L"Scandium";
        }
        case Titanium: switch (lang) {
            case Hebrew: return L"טיטניום";
            case British_English: return L"Titanium";
            case US_English: return L"Titanium";
        }
        case Vanadium: switch (lang) {
            case Hebrew: return L"ונדיום";
            case British_English: return L"Vanadium";
            case US_English: return L"Vanadium";
        }
        case Chromium: switch (lang) {
            case Hebrew: return L"כרום";
            case British_English: return L"Chromium";
            case US_English: return L"Chromium";
        }
        case Manganese: switch (lang) {
            case Hebrew: return L"מנגן";
            case British_English: return L"Manganese";
            case US_English: return L"Manganese";
        }
        case Iron: switch (lang) {
            case Hebrew: return L"ברזל";
            case British_English: return L"Iron";
            case US_English: return L"Iron";
        }
        case Cobalt: switch (lang) {
            case Hebrew: return L"קובלט";
            case British_English: return L"Cobalt";
            case US_English: return L"Cobalt";
        }
        case Nickel: switch (lang) {
            case Hebrew: return L"ניקל";
            case British_English: return L"Nickel";
            case US_English: return L"Nickel";
        }
        case Copper: switch (lang) {
            case Hebrew: return L"נחושת";
            case British_English: return L"Copper";
            case US_English: return L"Copper";
        }
        case Zinc: switch (lang) {
            case Hebrew: return L"אבץ";
            case British_English: return L"Zinc";
            case US_English: return L"Zinc";
        }
        case Gallium: switch (lang) {
            case Hebrew: return L"גליום";
            case British_English: return L"Gallium";
            case US_English: return L"Gallium";
        }
        case Germanium: switch (lang) {
            case Hebrew: return L"גרמניום";
            case British_English: return L"Germanium";
            case US_English: return L"Germanium";
        }
        case Arsenic: switch (lang) {
            case Hebrew: return L"ארסן";
            case British_English: return L"Arsenic";
            case US_English: return L"Arsenic";
        }
        case Selenium: switch (lang) {
            case Hebrew: return L"סלניום";
            case British_English: return L"Selenium";
            case US_English: return L"Selenium";
        }
        case Bromine: switch (lang) {
            case Hebrew: return L"ברום";
            case British_English: return L"Bromine";
            case US_English: return L"Bromine";
        }
        case Krypton: switch (lang) {
            case Hebrew: return L"קריפטון";
            case British_English: return L"Krypton";
            case US_English: return L"Krypton";
        }
        case Rubidium: switch (lang) {
            case Hebrew: return L"רובידיום";
            case British_English: return L"Rubidium";
            case US_English: return L"Rubidium";
        }
        case Strontium: switch (lang) {
            case Hebrew: return L"סטרונציום";
            case British_English: return L"Strontium";
            case US_English: return L"Strontium";
        }
        case Yttrium: switch (lang) {
            case Hebrew: return L"איטריום";
            case British_English: return L"Yttrium";
            case US_English: return L"Yttrium";
        }
        case Zirconium: switch (lang) {
            case Hebrew: return L"זירקוניום";
            case British_English: return L"Zirconium";
            case US_English: return L"Zirconium";
        }
        case Niobium: switch (lang) {
            case Hebrew: return L"ניאוביום";
            case British_English: return L"Niobium";
            case US_English: return L"Niobium";
        }
        case Molybdenum: switch (lang) {
            case Hebrew: return L"מוליבדן";
            case British_English: return L"Molybdenum";
            case US_English: return L"Molybdenum";
        }
        case Technetium: switch (lang) {
            case Hebrew: return L"טכנציום";
            case British_English: return L"Technetium";
            case US_English: return L"Technetium";
        }
        case Ruthenium: switch (lang) {
            case Hebrew: return L"רותניום";
            case British_English: return L"Ruthenium";
            case US_English: return L"Ruthenium";
        }
        case Rhodium: switch (lang) {
            case Hebrew: return L"רודיום";
            case British_English: return L"Rhodium";
            case US_English: return L"Rhodium";
        }
        case Palladium: switch (lang) {
            case Hebrew: return L"פלדיום";
            case British_English: return L"Palladium";
            case US_English: return L"Palladium";
        }
        case Silver: switch (lang) {
            case Hebrew: return L"כסף";
            case British_English: return L"Silver";
            case US_English: return L"Silver";
        }
        case Cadmium: switch (lang) {
            case Hebrew: return L"קדמיום";
            case British_English: return L"Cadmium";
            case US_English: return L"Cadmium";
        }
        case Indium: switch (lang) {
            case Hebrew: return L"אינדיום";
            case British_English: return L"Indium";
            case US_English: return L"Indium";
        }
        case Tin: switch (lang) {
            case Hebrew: return L"בדיל";
            case British_English: return L"Tin";
            case US_English: return L"Tin";
        }
        case Antimony: switch (lang) {
            case Hebrew: return L"אנטימון";
            case British_English: return L"Antimony";
            case US_English: return L"Antimony";
        }
        case Tellurium: switch (lang) {
            case Hebrew: return L"טלור";
            case British_English: return L"Tellurium";
            case US_English: return L"Tellurium";
        }
        case Iodine: switch (lang) {
            case Hebrew: return L"יוד";
            case British_English: return L"Iodine";
            case US_English: return L"Iodine";
        }
        case Xenon: switch (lang) {
            case Hebrew: return L"קסנון";
            case British_English: return L"Xenon";
            case US_English: return L"Xenon";
        }
        case Caesium: switch (lang) {
            case Hebrew: return L"צסיום";
            case British_English: return L"Caesium";
            case US_English: return L"Cesium";
        }
        case Barium: switch (lang) {
            case Hebrew: return L"בריום";
            case British_English: return L"Barium";
            case US_English: return L"Barium";
        }
        case Lanthanum: switch (lang) {
            case Hebrew: return L"לנתן";
            case British_English: return L"Lanthanum";
            case US_English: return L"Lanthanum";
        }
        case Cerium: switch (lang) {
            case Hebrew: return L"צריום";
            case British_English: return L"Cerium";
            case US_English: return L"Cerium";
        }
        case Praseodymium: switch (lang) {
            case Hebrew: return L"פרסאודימיום";
            case British_English: return L"Praseodymium";
            case US_English: return L"Praseodymium";
        }
        case Neodymium: switch (lang) {
            case Hebrew: return L"נאודימיום";
            case British_English: return L"Neodymium";
            case US_English: return L"Neodymium";
        }
        case Promethium: switch (lang) {
            case Hebrew: return L"פרומתיום";
            case British_English: return L"Promethium";
            case US_English: return L"Promethium";
        }
        case Samarium: switch (lang) {
            case Hebrew: return L"סמריום";
            case British_English: return L"Samarium";
            case US_English: return L"Samarium";
        }
        case Europium: switch (lang) {
            case Hebrew: return L"אירופיום";
            case British_English: return L"Europium";
            case US_English: return L"Europium";
        }
        case Gadolinium: switch (lang) {
            case Hebrew: return L"גדוליניום";
            case British_English: return L"Gadolinium";
            case US_English: return L"Gadolinium";
        }
        case Terbium: switch (lang) {
            case Hebrew: return L"טרביום";
            case British_English: return L"Terbium";
            case US_English: return L"Terbium";
        }
        case Dysprosium: switch (lang) {
            case Hebrew: return L"דיספרוסיום";
            case British_English: return L"Dysprosium";
            case US_English: return L"Dysprosium";
        }
        case Holmium: switch (lang) {
            case Hebrew: return L"הולמיום";
            case British_English: return L"Holmium";
            case US_English: return L"Holmium";
        }
        case Erbium: switch (lang) {
            case Hebrew: return L"ארביום";
            case British_English: return L"Erbium";
            case US_English: return L"Erbium";
        }
        case Thulium: switch (lang) {
            case Hebrew: return L"תוליום";
            case British_English: return L"Thulium";
            case US_English: return L"Thulium";
        }
        case Ytterbium: switch (lang) {
            case Hebrew: return L"איטרביום";
            case British_English: return L"Ytterbium";
            case US_English: return L"Ytterbium";
        }
        case Lutetium: switch (lang) {
            case Hebrew: return L"לוטציום";
            case British_English: return L"Lutetium";
            case US_English: return L"Lutetium";
        }
        case Hafnium: switch (lang) {
            case Hebrew: return L"הפניום";
            case British_English: return L"Hafnium";
            case US_English: return L"Hafnium";
        }
        case Tantalum: switch (lang) {
            case Hebrew: return L"טנטלום";
            case British_English: return L"Tantalum";
            case US_English: return L"Tantalum";
        }
        case Tungsten: switch (lang) {
            case Hebrew: return L"טונגסטן";
            case British_English: return L"Tungsten";
            case US_English: return L"Tungsten";
        }
        case Rhenium: switch (lang) {
            case Hebrew: return L"רניום";
            case British_English: return L"Rhenium";
            case US_English: return L"Rhenium";
        }
        case Osmium: switch (lang) {
            case Hebrew: return L"אוסמיום";
            case British_English: return L"Osmium";
            case US_English: return L"Osmium";
        }
        case Iridium: switch (lang) {
            case Hebrew: return L"אירידיום";
            case British_English: return L"Iridium";
            case US_English: return L"Iridium";
        }
        case Platinum: switch (lang) {
            case Hebrew: return L"פלטינה";
            case British_English: return L"Platinum";
            case US_English: return L"Platinum";
        }
        case Gold: switch (lang) {
            case Hebrew: return L"זהב";
            case British_English: return L"Gold";
            case US_English: return L"Gold";
        }
        case Mercury: switch (lang) {
            case Hebrew: return L"כספית";
            case British_English: return L"Mercury";
            case US_English: return L"Mercury";
        }
        case Thallium: switch (lang) {
            case Hebrew: return L"תליום";
            case British_English: return L"Thallium";
            case US_English: return L"Thallium";
        }
        case Lead: switch (lang) {
            case Hebrew: return L"עופרת";
            case British_English: return L"Lead";
            case US_English: return L"Lead";
        }
        case Bismuth: switch (lang) {
            case Hebrew: return L"ביסמוט";
            case British_English: return L"Bismuth";
            case US_English: return L"Bismuth";
        }
        case Polonium: switch (lang) {
            case Hebrew: return L"פולוניום";
            case British_English: return L"Polonium";
            case US_English: return L"Polonium";
        }
        case Astatine: switch (lang) {
            case Hebrew: return L"אסטטין";
            case British_English: return L"Astatine";
            case US_English: return L"Astatine";
        }
        case Radon: switch (lang) {
            case Hebrew: return L"רדון";
            case British_English: return L"Radon";
            case US_English: return L"Radon";
        }
        case Francium: switch (lang) {
            case Hebrew: return L"פרנציום";
            case British_English: return L"Francium";
            case US_English: return L"Francium";
        }
        case Radium: switch (lang) {
            case Hebrew: return L"רדיום";
            case British_English: return L"Radium";
            case US_English: return L"Radium";
        }
        case Actinium: switch (lang) {
            case Hebrew: return L"אקטיניום";
            case British_English: return L"Actinium";
            case US_English: return L"Actinium";
        }
        case Thorium: switch (lang) {
            case Hebrew: return L"תוריום";
            case British_English: return L"Thorium";
            case US_English: return L"Thorium";
        }
        case Protactinium: switch (lang) {
            case Hebrew: return L"פרוטקטיניום";
            case British_English: return L"Protactinium";
            case US_English: return L"Protactinium";
        }
        case Uranium: switch (lang) {
            case Hebrew: return L"אורניום";
            case British_English: return L"Uranium";
            case US_English: return L"Uranium";
        }
        case Neptunium: switch (lang) {
            case Hebrew: return L"נפטוניום";
            case British_English: return L"Neptunium";
            case US_English: return L"Neptunium";
        }
        case Plutonium: switch (lang) {
            case Hebrew: return L"פלוטוניום";
            case British_English: return L"Plutonium";
            case US_English: return L"Plutonium";
        }
        case Americium: switch (lang) {
            case Hebrew: return L"אמריציום";
            case British_English: return L"Americium";
            case US_English: return L"Americium";
        }
        case Curium: switch (lang) {
            case Hebrew: return L"קוריום";
            case British_English: return L"Curium";
            case US_English: return L"Curium";
        }
        case Berkelium: switch (lang) {
            case Hebrew: return L"ברקליום";
            case British_English: return L"Berkelium";
            case US_English: return L"Berkelium";
        }
        case Californium: switch (lang) {
            case Hebrew: return L"קליפורניום";
            case British_English: return L"Californium";
            case US_English: return L"Californium";
        }
        case Einsteinium: switch (lang) {
            case Hebrew: return L"איינשטייניום";
            case British_English: return L"Einsteinium";
            case US_English: return L"Einsteinium";
        }
        case Fermium: switch (lang) {
            case Hebrew: return L"פרמיום";
            case British_English: return L"Fermium";
            case US_English: return L"Fermium";
        }
        case Mendelevium: switch (lang) {
            case Hebrew: return L"מנדלביום";
            case British_English: return L"Mendelevium";
            case US_English: return L"Mendelevium";
        }
        case Nobelium: switch (lang) {
            case Hebrew: return L"נובליום";
            case British_English: return L"Nobelium";
            case US_English: return L"Nobelium";
        }
        case Lawrencium: switch (lang) {
            case Hebrew: return L"לורנציום";
            case British_English: return L"Lawrencium";
            case US_English: return L"Lawrencium";
        }
        case Rutherfordium: switch (lang) {
            case Hebrew: return L"רתרפורדיום";
            case British_English: return L"Rutherfordium";
            case US_English: return L"Rutherfordium";
        }
        case Dubnium: switch (lang) {
            case Hebrew: return L"דובניום";
            case British_English: return L"Dubnium";
            case US_English: return L"Dubnium";
        }
        case Seaborgium: switch (lang) {
            case Hebrew: return L"סיבורגיום";
            case British_English: return L"Seaborgium";
            case US_English: return L"Seaborgium";
        }
        case Bohrium: switch (lang) {
            case Hebrew: return L"בוהריום";
            case British_English: return L"Bohrium";
            case US_English: return L"Bohrium";
        }
        case Hassium: switch (lang) {
            case Hebrew: return L"האסיום";
            case British_English: return L"Hassium";
            case US_English: return L"Hassium";
        }
        case Meitnerium: switch (lang) {
            case Hebrew: return L"מייטנריום";
            case British_English: return L"Meitnerium";
            case US_English: return L"Meitnerium";
        }
        case Darmstadtium: switch (lang) {
            case Hebrew: return L"דרמשטאדטיום";
            case British_English: return L"Darmstadtium";
            case US_English: return L"Darmstadtium";
        }
        case Roentgenium: switch (lang) {
            case Hebrew: return L"רנטגניום";
            case British_English: return L"Roentgenium";
            case US_English: return L"Roentgenium";
        }
        case Copernicium: switch (lang) {
            case Hebrew: return L"קופרניקיום";
            case British_English: return L"Copernicium";
            case US_English: return L"Copernicium";
        }
        case Nihonium: switch (lang) {
            case Hebrew: return L"ניהוניום";
            case British_English: return L"Nihonium";
            case US_English: return L"Nihonium";
        }
        case Flerovium: switch (lang) {
            case Hebrew: return L"פלרוביום";
            case British_English: return L"Flerovium";
            case US_English: return L"Flerovium";
        }
        case Moscovium: switch (lang) {
            case Hebrew: return L"מוסקוביום";
            case British_English: return L"Moscovium";
            case US_English: return L"Moscovium";
        }
        case Livermorium: switch (lang) {
            case Hebrew: return L"ליברמוריום";
            case British_English: return L"Livermorium";
            case US_English: return L"Livermorium";
        }
        case Tennessine: switch (lang) {
            case Hebrew: return L"טנסין";
            case British_English: return L"Tennessine";
            case US_English: return L"Tennessine";
        }
        case Oganesson: switch (lang) {
            case Hebrew: "אוגאנסון";
            case British_English: return L"Oganesson";
            case US_English: return L"Oganesson";
        }
        }
        ErrorPrintChemical();
        std::cout << "couldn't find the right provided element" << std::endl;
        return NULL;
    }
private:
    //default error print for this class
    static void ErrorPrintChemical() {
        std::cout << "[ERROR]: Error in the ChemicalElements struct, ";
    }
    //a function that enables the use of Hebrew characters
    static void EnableHebrew() {
        std::locale::global(std::locale(""));
    }
public:
    //the enum of every language that this class currently supports
    static enum Language : unsigned short {
        Hebrew, 
        British_English,
        US_English
    };
    //an enum of every element, used in the functions based on number because it's represented as a number because it's an enum
    static enum Elements : unsigned short {
        Hydrogen = 1,   // 1
        Helium,         // 2 
        Lithium,        // 3 
        Beryllium,      // 4
        Boron,          // 5 
        Carbon,         // 6
        Nitrogen,       // 7
        Oxygen,         // 8 
        Fluorine,       // 9
        Neon,           // 10
        Sodium,         // 11
        Magnesium,      // 12
        Aluminum,       // 13
        Aluminium = 13, // 13 
        Silicon,        // 14
        Phosphorus,     // 15
        Sulfur,         // 16
        Sulphur = 16,   // 16
        Chlorine,       // 17
        Argon,          // 18
        Potassium,      // 19
        Calcium,        // 20
        Scandium,       // 21
        Titanium,       // 22
        Vanadium,       // 23
        Chromium,       // 24
        Manganese,      // 25
        Iron,           // 26
        Cobalt,         // 27
        Nickel,         // 28
        Copper,         // 29
        Zinc,           // 30
        Gallium,        // 31
        Germanium,      // 32
        Arsenic,        // 33
        Selenium,       // 34
        Bromine,        // 35
        Krypton,        // 36
        Rubidium,       // 37
        Strontium,      // 38
        Yttrium,        // 39
        Zirconium,      // 40
        Niobium,        // 41
        Molybdenum,     // 42
        Technetium,     // 43
        Ruthenium,      // 44
        Rhodium,        // 45
        Palladium,      // 46
        Silver,         // 47
        Cadmium,        // 48
        Indium,         // 49
        Tin,            // 50 
        Antimony,       // 51
        Tellurium,      // 52 
        Iodine,         // 53
        Xenon,          // 54
        Cesium,         // 55
        Caesium = 55,   // 55
        Barium,         // 56
        Lanthanum,      // 57
        Cerium,         // 58
        Praseodymium,   // 59
        Neodymium,      // 60
        Promethium,     // 61
        Samarium,       // 62
        Europium,       // 63
        Gadolinium,     // 64
        Terbium,        // 65
        Dysprosium,     // 66
        Holmium,        // 67
        Erbium,         // 68
        Thulium,        // 69
        Ytterbium,      // 70
        Lutetium,       // 71
        Hafnium,        // 72
        Tantalum,       // 73
        Tungsten,       // 74
        Rhenium,        // 75
        Osmium,         // 76
        Iridium,        // 77
        Platinum,       // 78
        Gold,           // 79
        Mercury,        // 80
        Thallium,       // 81
        Lead,           // 82 
        Bismuth,        // 83
        Polonium,       // 84
        Astatine,       // 85
        Radon,          // 86
        Francium,       // 87
        Radium,         // 88
        Actinium,       // 89
        Thorium,        // 90
        Protactinium,   // 91
        Uranium,        // 92
        Neptunium,      // 93
        Plutonium,      // 94
        Americium,      // 95
        Curium,         // 96
        Berkelium,      // 97
        Californium,    // 98
        Einsteinium,    // 99
        Fermium,        // 100
        Mendelevium,    // 101
        Nobelium,       // 102
        Lawrencium,     // 103
        Rutherfordium,  // 104
        Dubnium,        // 105
        Seaborgium,     // 106
        Bohrium,        // 107
        Hassium,        // 108
        Meitnerium,     // 109
        Darmstadtium,   // 110
        Roentgenium,    // 111
        Copernicium,    // 112
        Nihonium,       // 113
        Flerovium,      // 114
        Moscovium,      // 115
        Livermorium,    // 116
        Tennessine,     // 117
        Oganesson       // 118
    };
};

class ChemEngine : ChemicalElements {
    ChemEngine() = delete;

public:
    //calculates the molecular weight of a given molecule, the molecule formula is given as an std::string
    static long double MolecularWeight(const std::string& formula) {
        char c, second = 0, temp = 0;
        double tempElement = 0, sum = 0;
        int multiplier = 1, i = 0;
        c = formula.at(0);
        if (IsNumber(c)) {
            multiplier = NumCatcher(c, formula, i);
        }
        i++;
        for (; i < formula.length(); i++) {
            if (IsCapitalLetter(c)) {
                second = formula.at(i);
                if (IsLetterNotCapital(second)) {
                    tempElement = AtomicWeightLetters(c, second);
                    c = second = 0;

                    if (formula.length() - 1 > i) {
                        i++;
                        temp = formula.at(i);
                        if (IsNumber(temp)) {
                            sum += tempElement * NumCatcher(temp, formula, i);
                            c = temp;
                            tempElement = temp = 0;
                            continue;
                        }
                        else {
                            sum += tempElement;
                            c = temp;
                            tempElement = temp = 0;
                            continue;
                        }
                    }
                    else {
                        sum += tempElement;
                        tempElement = 0;
                        break;
                    }
                }
                else if (IsCapitalLetter(second)) {
                    tempElement = AtomicWeightLetters(c, 0);
                    sum += tempElement;
                    c = second;
                    tempElement = second = 0;
                    continue;
                }
                else if (IsNumber(second)) {
                    tempElement = AtomicWeightLetters(c, 0);
                    sum += tempElement * NumCatcher(second, formula, i);
                    c = second;
                    tempElement = second = 0;
                    continue;
                }
            }
            c = formula.at(i);
        }
        if (IsCapitalLetter(c) && second == 0) {
            sum += AtomicWeightLetters(c, 0);
        }
        return sum * multiplier;
    }

    //calculates the concentration of a certain solution in molars
    //gets the mass of the added matter, the volume of the solution and the atomic weight of the added matter
    static long double MolarCalculator(const long double& mass, const long double& volume, const long double& atomicWeight) {
        long double newMass = mass / atomicWeight;
        return newMass / volume;
    }
private:
    static int NumCatcher(char& c, const std::string& formula, int& i) {
        int num = 0;
        while (IsNumber(c)) {
            num = num * 10 + c - '0';
            i++;
            if (!(i < formula.length())) {
                break;
            }
            c = formula.at(i);
        }
        return num;
    }

    static bool IsCapitalLetter(const char& c) {
        return (c >= 'A' && c <= 'Z');
    }
    static bool IsNumber(const char& c) {
        return (c >= '0' && c <= '9');
    }
    static bool IsLetterNotCapital(const char& c) {
        return (c >= 'a' && c <= 'z');
    }
};
