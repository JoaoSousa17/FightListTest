#include "dicionarios.h"

std::vector<Categoria> categorias = {
    {
        "Meses do Ano",
        {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"},
        {{"janeiro",1}, {"fevereiro",2}, {"março",1}, {"abril",1}, {"maio",2}, {"junho",1}, {"julho",2}, {"agosto",3}, {"setembro",3}, {"outubro",3}, {"novembro",2}, {"dezembro",3}}
    },
    {
        "Cores",
        {"vermelho", "azul", "verde", "amarelo", "roxo", "laranja", "preto", "branco", "cinzento", "rosa", "castanho", "turquesa"},
        {{"vermelho",2}, {"azul",1}, {"verde",1}, {"amarelo",2}, {"roxo",2}, {"laranja",2}, {"preto",1}, {"branco",1}, {"cinzento",2}, {"rosa",1}, {"castanho",3}, {"turquesa",3}}
    },
    {
        "Frutas",
        {"maçã", "banana", "laranja", "melancia", "pera", "uva", "kiwi", "manga", "cereja", "ananás", "morango", "framboesa"},
        {{"maçã",1}, {"banana",1}, {"laranja",1}, {"melancia",3}, {"pera",1}, {"uva",1}, {"kiwi",2}, {"manga",2}, {"cereja",2}, {"ananás",2}, {"morango",2}, {"framboesa",3}}
    },
    {
        "Profissões",
        {"médico", "advogado", "professor", "engenheiro", "bombeiro", "polícia", "padeiro", "motorista", "arquiteto", "cientista", "dentista", "enfermeiro"},
        {{"médico",2}, {"advogado",3}, {"professor",2}, {"engenheiro",3}, {"bombeiro",2}, {"polícia",2}, {"padeiro",1}, {"motorista",1}, {"arquiteto",3}, {"cientista",3}, {"dentista",2}, {"enfermeiro",2}}
    },
    {
        "Espaço",
        {"lua", "sol", "terra", "marte", "júpiter", "saturno", "urano", "neptuno", "estrela", "galáxia", "cometa", "meteorito"},
        {{"lua",1}, {"sol",1}, {"terra",1}, {"marte",2}, {"júpiter",2}, {"saturno",2}, {"urano",2}, {"neptuno",2}, {"estrela",1}, {"galáxia",3}, {"cometa",2}, {"meteorito",3}}
    },
    {
        "Animais",
        {"cão", "gato", "elefante", "leão", "tigre", "urso", "girafa", "zebra", "rinoceronte", "hipopótamo", "lobo", "pinguim"},
        {{"cão",1}, {"gato",1}, {"elefante",3}, {"leão",2}, {"tigre",2}, {"urso",2}, {"girafa",2}, {"zebra",1}, {"rinoceronte",3}, {"hipopótamo",3}, {"lobo",1}, {"pinguim",2}}
    },
    {
        "Países Europeus",
        {"portugal", "espanha", "frança", "itália", "alemanha", "polónia", "grécia", "noruega", "suécia", "finlândia", "dinamarca", "roménia"},
        {{"portugal",1}, {"espanha",1}, {"frança",1}, {"itália",1}, {"alemanha",2}, {"polónia",2}, {"grécia",1}, {"noruega",2}, {"suécia",2}, {"finlândia",3}, {"dinamarca",2}, {"roménia",2}}
    },
    {
        "Instrumentos Musicais",
        {"guitarra", "piano", "violino", "bateria", "saxofone", "trompete", "flauta", "harpa", "acordeão", "clarinete", "tambor", "baixo"},
        {{"guitarra",2}, {"piano",2}, {"violino",3}, {"bateria",2}, {"saxofone",3}, {"trompete",2}, {"flauta",1}, {"harpa",2}, {"acordeão",3}, {"clarinete",3}, {"tambor",1}, {"baixo",1}}
    },
    {
        "Marcas de Carros",
        {"toyota", "bmw", "audi", "mercedes", "ford", "volkswagen", "renault", "peugeot", "honda", "fiat", "mazda", "kia"},
        {{"toyota",1}, {"bmw",2}, {"audi",2}, {"mercedes",2}, {"ford",1}, {"volkswagen",2}, {"renault",1}, {"peugeot",1}, {"honda",1}, {"fiat",1}, {"mazda",2}, {"kia",1}}
    },
    {
        "Cidades Portuguesas",
        {"lisboa", "porto", "coimbra", "braga", "aveiro", "faro", "guimarães", "viseu", "leiria", "évora", "setúbal", "cascais"},
        {{"lisboa",1}, {"porto",1}, {"coimbra",1}, {"braga",1}, {"aveiro",1}, {"faro",1}, {"guimarães",2}, {"viseu",1}, {"leiria",1}, {"évora",1}, {"setúbal",1}, {"cascais",1}}
    }
};
