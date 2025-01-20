@echo off

if /i "%~x2" NEQ ".cpp" (
    echo Can send only C++ ^(.cpp^) files.
    exit /b
)

set "filename=%~nx2"
set "dirname=%~n1"

python "%~dp0..\manager.py" --send %dirname% %filename%
l'univa vosa che poi dovrai cambiare sarà modificare il manager con la directory dove vuoi che si scarichino i files e da dove li mandi