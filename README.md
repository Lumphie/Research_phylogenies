# Research Protracted Phylogenies from a sexual selection speciation model

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
![Whitespace](Whitespace.png)
[![Codecov logo](Codecov.png)](https://www.codecov.io)

[![Build Status](https://travis-ci.org/Lumphie/Research_phylogenies.svg?branch=master)](https://travis-ci.org/Lumphie/Research_phylogenies)
[![codecov.io](https://codecov.io/github/Lumphie/Research_phylogenies/coverage.svg?branch=master)](https://codecov.io/github/Lumphie/Research_phylogenies?branch=master)


Research project by Kees Wesselink.

## Schedule

 * Monday 10:30-11:00 TRES coffee break, 580
 * Monday 16:00-17:00 TRES meeting, Blue Room
 * Tuesday 10:00-?11:00 progress meeting Richel
 * Thursday 16:00-17:00 GELIFES lecture, The Eye/Blue Room
 * Monthly TECE meetings, first at Tuesday September 27th from 9:30-16:00

## Scientific articles 

 * [1] Van Doorn, G. S., & Weissing, F. J. (2001). "Ecological versus sexual selection models of sympatric speciation." Selection, 2, 17 - 40. 
 * [2] Etienne, Rampal S., and James Rosindell. "Prolonging the past counteracts the pull of the present: protracted speciation can explain observed slowdowns in diversification." Systematic Biology (2011): syr091.
 * ([My current work](https://github.com/richelbilderbeek/Cer2016/blob/master/doc/Cer2016.pdf))
 * [3] Janzen, Thijs, Höhna, Sebastian, Etienne, Rampal S. "Approximate Bayesia n Computation of diversiﬁcatio nrates from molecular phylogenies: introducing a newefﬁcient summary statistic, the nLTT." Methods in ECology and Evolution (2015), 6, 566 - 575.

## Scientific presentations

 * [Bilderbeek: Should protractedness be included in speciation models?](https://github.com/richelbilderbeek/Science/blob/master/Bilderbeek20151123TresMeeting/20151123TresMeeting.pdf)

## Programming presentations

 * [git and GitHub](https://github.com/richelbilderbeek/CppPresentations/blob/master/Git.pdf)
 * [Travis CI](https://github.com/richelbilderbeek/CppPresentations/blob/master/Travis.pdf)
 * [Boost.Test](https://github.com/richelbilderbeek/CppPresentations/blob/master/BoostTest.pdf)

## Programming tutorials

 * [Travis C++ tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial/blob/master/travis_cpp_tutorial.pdf)

## Programming links

 * [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines) (work in progress, but already good)
 * [C++ coding standards](http://www.gotw.ca/publications/c++cs.htm) (C++98, but still good)
 
# Paper

Is or should sympatric speciation be implemented in the Protracted Birth-Death model? [Better?]
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
•	[1] Van Doorn, G. S., & Weissing, F. J. (2001). "Ecological versus sexual selection models of sympatric speciation." Selection, 2, 17 - 40.
•	[2] Etienne, Rampal S., and James Rosindell. (2011) "Prolonging the past counteracts the pull of the present: protracted speciation can explain observed slowdowns in diversification." Systematic Biology: syr091.
•	[3] Janzen, Thijs, Höhna, Sebastian, Etienne, Rampal S. (2015) "Approximate Bayesia n Computation of diversiﬁcatio nrates from molecular phylogenies: introducing a newefﬁcient summary statistic, the nLTT." Methods in ECology and Evolution 6, 566 - 575.
•	[4] (My current work)
•	[5] Kendall, D. G. (1948) “On some modes of population growth giving rise to R.A. Fisher’s logarithmic series distribution.” Biometrika, 35, 6 – 15
•	[6] Poulton, E. B. (1904) "What is a species?" Proceedings of the Entomological Society of London, 1903, 77–116
•	[7] Gavrilets, S. (2003) “Perspective: Models of Speciation: What have we learned in 40 years?” Evolution, 57(10), 2197-2215
•	[8] Van Doorn, G. S. (2004) “Sexual selection and sympatric speciation.” Diss University of Groningen, the Netherlands.
•	[9] Fitzpatrick, B.M., Fordyce, J.A. and Gavrilets, S. (2008) “What, if anything, is sympatric speciation?”, Evolutionary Biology, 21(6), 1452-1459

