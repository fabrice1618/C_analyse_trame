#include <stdio.h>
#include "common.h"
#include "ip.h"

// Analyser entete IP
void analyserIP(char *trame, IP *ip) 
{
    error_exit("Fonction analyserIP() non implémentée");
}

// Afficher une adresse IP
void afficherIPAddress(unsigned int address)
{
    error_exit("Fonction afficherIPAddress() non implémentée");
}

// Afficher entete IP
void afficherIP(IP ip)
{
    printf("IP:\n");
    printf("    version: %d\n", ip.version);
    printf("    IHL: %d\n", ip.IHL);
    printf("    typeOfService: %d\n", ip.typeOfService);
    printf("    totalLength: %d\n", ip.totalLength);
    printf("    identification: %d\n", ip.identification);
    printf("    flags: %d\n", ip.flags);
    printf("    fragmentOffset: %d\n", ip.fragmentOffset);
    printf("    timeToLive: %d\n", ip.timeToLive);
    printf("    protocol: %d\n", ip.protocol);
    printf("    HeaderChecksum: %d\n", ip.HeaderChecksum);
    printf("    sourceIP: ");
    afficherIPAddress(ip.sourceIP);
    printf("\n    destinationIP: ");
    afficherIPAddress(ip.destinationIP);
    printf("\n");
}