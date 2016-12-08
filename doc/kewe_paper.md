# Is or should sympatric speciation be implemented in the Protracted Birth-Death model? [Better?]
Kees W. Wesselink & Richèl J.C. Bilderbeek
September 01, 2016

## 1.	Abstract

Speciation models are used to construct phylogenetic trees. Most of the currently used models, including the protracted birth-death model, lack a mechanism. The models assume several constant factors to determine if a new lineage should arise or an old lineage should go extinct. A mechanistic based model might give us more realistic phylogenies and answer evolutionary questions better than the currently used (protracted) birth-death model.
## 2.	Introduction	

## 2.1	(Sympatric) speciation
### 2.1.1	Speciation

A lot of research is done on speciation. 
According to van Doorn [8] there are 6 obstacles to overcome for speciation to occur:
  * 1.	The establishment of a disruptive selection regime
  * 2.	The maintenance of polymorphism under disruptive selection
  * 3.	The evolution of reproductive isolation
  * 4.	Transmitting the force of disruptive selection to the genes responsible for reproductive isolation
  * 5.	A mechanism for assortative mating
  * 6.	Further evolution towards full reproductive isolation.  


### 2.1.2	Sympatric speciation

Sympatric speciation is speciation within the same geographic region where new species evolve from a single ancestor species.
Sympatric speciation is not a new concept, as Poulton [6] first introduced it in 1904. Since then a number of researches has been done to either find evidence [REFS] or explain the concept with a model [REFS]. 
So far most models focus on finding unique parameters for which (sympatric) speciation occurs, but (according to Gavrilets) [7] we need to shift focus to more detailed questions about the probability, the duration or the waiting time of speciation.

## 2.2	Speciation models
### 2.2.1	The need for speciation models

Speciation models help us construct phylogenies to answer evolutionary biological questions. 
The answers can be used to give a better understanding of speciation in nature.
[REF 4]

### 2.2.1	Birth-death model (BD)

The standard birth-death model [5] shows an accelerating increase in the number of species. This is not shown in phylogenetic trees, which have a slowdown in the increase of number of lineages. [2] The birth-death model is one of the simplest of models [4] that has a constant speciation rate (λ) and a constant extinction rate (μ). 

### 2.1.3	Protracted birth-death model (PBD)

By assuming that speciation is not instant and happens over a longer period of time we can change the birth-death model to a protracted birth-death model. “Good” species have a chance of making incipient species with rate bg that will become good species with rate λ. Incipient can initiate speciation with rate bi. Both good and incipient species can go extinct with rate μg and μi respectively. [2] [REF 4] The (P)BD model assumes the speciation is allopatric and therefor has no gene flow between two (incipient) species. Incipient species have two outcomes; they either go extinct or become a good species, whereas a good species can only go extinct eventually. 

### 2.1.4	Relationship between birth-death and protracted birth-death
[2]
### 2.1.5	Other speciation models
[2] [REF]
### 2.1.6	Problems of speciation models
Speciation models, or models in general, tend to simplify the real world as much as possible. This is done to 

## 2.2	The use of mechanisms to model speciation
### 2.2.1	Sexual and ecological selection (SES)

The Sexual and Ecological selection model of van Doorn en Weissing was made to be a more complete model to look at sympatric speciation [1]. To do this they combined older models with an ecological trait or some sort of sexual selection. The model leads to ecological differentiation, and mating strategies, which resulted in assortative mating.

### 2.2.2	Bateson-Dobzhansky-Müller (BDM)
[REF Jorik]

### 2.2.3	Island Model Lyke
[REF Lyke]

## 2.3	Differences protracted birth-death model and Sexual and Ecological selection model
[1] [2]

The original PBD model uses allopatric speciation [2] while the SES model is focused on unravelling sympatric speciation. [1] With SES gene flow between an old and a new species is still possible and will often result in a new species flowing back to the old species before they can branch off completely. 

## 2.4	This study

It is unknown if the PBD model works for sympatric speciation since its creators never assumed a mechanism. This study will look at the SES model that is based on sympatric speciation and compares it to the PBD model. 
 To compare both models I will study the SES model with a maximum likelihood estimation [REF?] to find parameters for the PBD and compare the outcomes with an nLTT analysis.
 
## 2.5	Novelty

Previous research stops after finding specific scenarios for sympatric speciation [7]. I want to connect found parameters to nature and find the probability of sympatric speciation in the real world. 

## 2.6	Analysis
[3] I will use phylogenetic trees from the SES model to get parameters for the PBD. This way both outcomes will be comparable.

## 2.7	Expectations

## 3.	Methods
## 3.1	Parameters
### 3.1.1	PBD 
The PBD model has five parameters (see figure 1). A speciation-initiation (or birth-) rate (bg and bi) and an extinction rate (μg and μi) for both (good and incipient) kinds of species. The fifth parameter is the speciation completion rate or the rate incipient species become good species (λ). [2]
### 3.1.2	Sexual and Ecological selection model
Van Doorn’s model has ten parameters (see figure 2). Most of them indicate the specificity of mate choice or the range of the three types (x, p and q)[1] 

[ADD FIGURE 2 SES]

## 3.2	Creating species trees
To create the phylogenetic trees the SES model has to be altered so it will output the number of species through time instead of the different genetic types through time [1]. To find the number of species for the trees the individuals have to be in groups without mutual individuals (otherwise they would be grouped together).  These groups should be based on the attractiveness (the chance of mating) between all individuals; which is partly calculated every iteration step in van Doorns model [1].
## 3.3	Analysis
### 3.3.1	nLTT
[3] An nLTT plot of average trees from both models will be made to compare the results.
When there is a big difference between the two trees you’d expect a large area between the two graphs (see figure 3a). Two very similar trees give a smaller area between graphs thus a smaller difference (see figure 3b)
   
Figure 3: Two example nLTT outcomes. (A) shows a bigger difference than (B) which has two very similar phylogenetic trees.
### 3.3.2	γ
The Gamma statistic (Pybus & Harvey 2000) is given by: 
Pybus, O. & Harvey, P. (2000) Testing macro–evolutionary models using incom- 
plete molecular phylogenies. Proceedings of the Royal Society B: Biological Sci- ences, 267, 2267–72. 
## 3.4	Peripherals

### 3.4.1	Software
https://github.com/Richelbilderbeek/pbdmms 
### 3.4.2	Hardware

## 4.	Results

## 5.	Discussion

## References
 *	[1] Van Doorn, G. S., & Weissing, F. J. (2001). "Ecological versus sexual selection models of sympatric speciation." Selection, 2, 17 - 40.
 *	[2] Etienne, Rampal S., and James Rosindell. (2011) "Prolonging the past counteracts the pull of the present: protracted speciation can explain observed slowdowns in diversification." Systematic Biology: syr091.
 *	[3] Janzen, Thijs, Höhna, Sebastian, Etienne, Rampal S. (2015) "Approximate Bayesia n Computation of diversiﬁcatio nrates from molecular phylogenies: introducing a newefﬁcient summary statistic, the nLTT." Methods in ECology and Evolution 6, 566 - 575.
 * [4] (My current work)
 *	[5] Kendall, D. G. (1948) “On some modes of population growth giving rise to R.A. Fisher’s logarithmic series distribution.” Biometrika, 35, 6 – 15
 * [6] Poulton, E. B. (1904) "What is a species?" Proceedings of the Entomological Society of London, 1903, 77–116
 *	[7] Gavrilets, S. (2003) “Perspective: Models of Speciation: What have we learned in 40 years?” Evolution, 57(10), 2197-2215
 *	[8] Van Doorn, G. S. (2004) “Sexual selection and sympatric speciation.” Diss University of Groningen, the Netherlands.
 *	[9] Fitzpatrick, B.M., Fordyce, J.A. and Gavrilets, S. (2008) “What, if anything, is sympatric speciation?”, Evolutionary Biology, 21(6), 1452-1459

# Nu in het Nederlands en een stuk uitgebreider

## Inleiding
Wanneer we om ons heen kijken zien we ontzettend veel diersoorten. Deze zijn allemaal ontstaan uit één soort. Hoe we precies van één soort tot alle soorten die we nu hebben zijn gekomen is nog niet geheel duidelijk. Hier bestaan vele theorieën over. De meest bekende is misschien wel allopatrische soortvorming. [REF]  Hierbij wordt een originele populatie geografisch gescheiden waarna de twee nieuwe populaties genotypisch of fenotypisch divers worden. Dit kan komen door selectiedruk of genetische drift. [REF] Als daarna de fysieke barrière wordt opgeheven kan het zijn dat individuen van de twee populaties niet langer kunnen paren. Er is dan een nieuwe soort.
Een veel minder onderzochte vorm van soortvorming is sympatrische soortvorming. Hierbij blijft de originele populatie binnen dezelfde geografische locatie. Als individuen rond het optimum van een ecologische distributie veel competitie ervaren ontstaat er disruptieve selectie (van Doorn & Weissing, 2001). Daarbij ontstaan er twee nieuwe populaties die net een iets andere ecologische niche bezetten (van Doorn & Weissing, 2001).
Soortvorming wordt veel onderzocht met theoretische modellen. Met deze modellen worden zo veel mogelijke aspecten van soortvorming één voor één aangepakt om steeds dichter bij de werkelijkheid te komen. Zo kan men het hele proces van diversificatie beter begrijpen en ook er achter komen hoe we al die miljoenen soorten uiteindelijk zijn ontstaan.
Aangezien deze modellen een versimpeling van de werkelijkheid zijn wordt soms een mechanisme achterwege gelaten. Zoals bij het Protracted Birth-Death (PBD) model van Etienne en Rosindell (2011). In hun paper geven ze expliciet aan dat er niet is gekozen voor een mechanisme, maar dit model werkt sowieso voor allopatrische soortvorming [REF]. De vraag is dan ook of dit model )zonder een mechanisme) ook werkt voor sympatrische soortvorming, en zo niet of het dan geïmplementeerd moet worden. 
Is or should sympatric speciation be implemented in the Protracted Birth-Death model?

## Sexual and Ecological Selection (SES) model
Om deze vraag te kunnen beantwoorden zal ik het PBD model van Etienne en Rosindell (2011) moeten vergelijken met een model dat sympatrische soortvorming probeert te verklaren. Eén zo’n model is het Ecological and sexual selection model van van Doorn en Weissing (2001). In dit model hebben ze geprobeerd oudere modellen met ofwel ecologische selectie ofwel sexuele selectie. Ze proberen te verklaren wanneer en ook hoe sympatrische soortvorming kan ontstaan. 
In het model hebben alle individuen drie erfelijke eigenschappen: een ecological type, een male trait en een female preference voor die trait. Aan het begin wordt een individu gekozen en haar mortality rate berekend. Dit wordt gedaan met de volgende formule: 
mi= γ (∑_k▒〖gc(xi-xk)〗)/(gk(xi))
Hierbij is mi de mortality rate van individu i, γ een constante to scale the carrying capacity of the system, ∑_k▒〖gc(xi-xk)〗 is de competitie die individu i ervaart met alle andere individuen in de populatie en gk(xi) is de fitness die hoort bij het ecotype van individu i (deze ligt op een gaussian curve met breedte σK). Het omgekeerde hier van, 1 – mi, is de survival rate. De survival rate is de kans die een individu heeft om te overleven. 
Als het gekozen individu het overleeft dan wordt er een tweede individu gekozen, waarbij het individu met de hoogste attractiveness de grootste kans heeft om gekozen te worden. De attractiveness wordt berekend door de waarde op de gaussian curve gm bij het verschil tussen de preference van i en de male trait van het tweede individu te vermenigvuldigen met de waarde op de gaussian curve ge bij het verschil tussen de ecological types van i en het tweede individu. Hier komt een waarde tussen 0 en 1 uit en dit staat voor de kans dat de twee gekozen individuen met elkaar paren. Een bevrucht vrouwtje produceert b nakomelingen en daarna sterft zij. Ook heeft het eerste individu een kans η om niet te paren. De waarde van η ligt dan hoger als het zoeken van een partner kostbaar is. Dit wordt allemaal gedaan tot alle individuen zijn geweest en dan begint de volgende generatie. 

## Protracted Birth-Death (PBD) model
Het PBD model van Etienne en Rosindell is een uitbreiding op het Birth-Death (BD) model van Kendal (1948). In het BD model ontstaan (zonder mechanisme) met een constante rate nieuwe soorten en kunnen soorten ook met een constante rate uitsterven. Iets wat er nog niet klopt in dit model is dat er aan het einde een plotselinge stijging is van het aantal soorten (Etienne en Rosindell, 2011), ook wel de pull of the present genoemd. Het Protracted Birth-Death model lost dit op door nieuwe soorten eerst incipient te maken en met een constante rate deze incipient soorten goede soorten te laten worden. De in het heden nog incipient soorten worden niet meegenomen bij de telling van het aantal soorten (zie figuur X). Op deze manier stellen de incipient soorten populaties voor die al wel bestaan, maar nog niet als soort erkend worden. Op dit moment zijn er verder nog geen verschillen tussen de incipient en de goede soorten. Beide soorten hebben dezelfde birth en dezelfde extinction rate.  Het PBD model  gaat er van uit dat er geen gene flow is tussen twee (incipient) soorten en is daarmee dus allopatrisch. Echter zoals eerder vermeld wordt er geen mechanisme aan verbonden. 

## Verschillen PBD en SES
Beide modellen zijn in bijna alle aspecten het tegenovergestelde. SES heeft een mechanisme op individu niveau, terwijl PBD dit juist niet heeft. PBD lijkt allopatrisch en SES juist sympatrisch. Bij het SES model is gene flow tussen oude en nieuwe soorten mogelijk, al is die kans wel heel erg klein. Als de kans namelijk te groot wordt dan vloeit de nieuwe soort terug bij de oude soort voordat daadwerkelijk ‘branching’ kan plaatsvinden. 

## Dit onderzoek
Het is onduidelijk of het PBD model ook geldt voor sympatrische soortvorming. Aangezien het originele model bewust een mechanisme achterwege laat. Daarom gaat dit onderzoek de uitkomsten van beide modellen vergelijken om te zien of en waar de verschillen zijn. Veel onderzoek naar sympatrische soortvorming is er nog niet gedaan. Daarom is het handig om te kijken hoeveel verschillen er daadwerkelijk zijn met allopatrische soortvorming.
In dit onderzoek worden beide modellen aan elkaar aangepast zodat ze goed vergelijkbaar worden. Aan het begin van dit onderzoek bevat het SES model nog veel ingewikkelde “overbodige” methodes om tot de resultaten te komen. Ook moeten zo veel mogelijk variabelen gelijk gemaakt worden om goede conclusies te kunnen trekken.

## Vernieuwing
Beide modellen zijn nog niet eerder met elkaar vergeleken. Ook wordt bij onderzoek naar sympatrische soortvorming vaak naar de unieke scenario’s gezocht (Gavrilets, 2003) en ook veel naar de verschillen met allopatrische soortvorming gekeken. In dit onderzoek wordt er geprobeerd juist te kijken naar wat er overeenkomt en of beide manieren van soortvorming ook echt zo veel verschillen als er beweerd wordt.

## Hypothese
Het PBD model zal waarschijnlijk niet  te veel gaan verschillen met het SES model. Dat zou betekenen dat het PBD model gebruikt kan worden voor sympatrische soortvorming. Dit is logisch aangezien je het incipient gedeelte van een soort ook kan zien als de verminderde gene flow die er plaats vindt bij sympatrische soortvorming, in plaats van helemaal geen gene flow zoals op dit moment beweerd wordt.

## Methode
Beide modellen gebruiken erg verschillende parameters. Om er voor te zorgen dat er geen onvergelijkbare dingen worden vergeleken worden de fylogenetische bomen van het SES model met een maximum-likelihood gebruiken om de parameters van het PBD te verkrijgen. Met die parameters kan het PBD model dan gerund worden.
Van beide modellen zal dan een normalized Lineage Through Time plot gemaakt worden. De oppervlakte tussen beide plots geeft het verschil weer tussen beide fylogenetische bomen (Janzen et al., 2015). 
Voor een nLTT plot moet het SES model aangepast worden. SES geeft namelijk de genormaliseerde aantallen van alle ecotypes, female preferences en male traits door de tijd weer. Een lineage kan worden bepaald door de attractiveness tussen alle individuen uit te rekenen. Tussen alle individuen waar een redelijk grote kans (5%) is dat ze paren wordt een lijn getrokken en alle individuen waar een lijntje tussen zit worden geclusterd met behulp van een Boost library. [REF] De verschillende groepen die dan gevormd worden zijn ieder hun eigen lineage / soort.

## Peripherals

###	Software
https://github.com/Richelbilderbeek/pbdmms
###	Hardware
Super Cluster van de Rug

 
## Resultaten
Die zijn er natuurlijk nog niet, maar ik kan wel voorspellen hoe ze er uit gaan zien.  
Boven: erg veel verschil, Onder: weinig verschil.
Conclusie en Discussie
Op dit moment kan ik nog niks concluderen, ook al denk ik wel dat ik gelijk ga hebben.

