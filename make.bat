@echo off
if ["%*"]==["COMPILE"] GOTO COMPILAR
if ["%*"]==["RUN"] GOTO CORRER
if ["%*"]==["RUNARG"] GOTO CORRERARG
GOTO FIN

:COMPILAR
tcc main.c
GOTO FIN

:CORRER
MAIN.EXE
GOTO FIN

:CORRERARG
MAIN.EXE PERSONA.TXT
GOTO FIN

:FIN
