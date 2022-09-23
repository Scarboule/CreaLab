# Débilus (ft Arthur Prud'homme et Clément Souplet)
## Projet réalisé dans le cadre de la première semaine de CréaLab en A2 "Coding & digital innovation" à l'IIM.

Débilus est un robot autonome. L'objectif du projet est de réaliser un robot capable de se déplacer et d'éviter les obstacles.
Pour ce faire nous avons utilisé un capteur de distance à ultrason, ainsi que des moteurs électriques commandés par arduino.
Grâce au moteur le robot est capable de se déplacer, ils transmettent leurs puissance à des chenilles via des roues crantés.
Le robot possède un train de chenille sur la droite et un sur la gauche a la manière d'un tank. Un moteur contrôle un train de chenille.
Lorsqu'il détecte un obstacle en face de lui à moin de 50cm, le robot inverse le sens de rotation du moteur de droite. Ce qui le fera tourner vers la droite pour évité l'obstacle.
De plus nous avons rajouté un haut parleur, qui, via un module mp3 peut émettre un son.
Ainsi, losque le robot se trouve à moin  20cm d'un obstacle il va produire un son d'alerte à la potentiel collision.

## Principe de fonctionnement du capteur à ultrason
Les ultrasons sont des ondes sonores, inaudible par l'homme.
Le capteur est composé d'un émetteur d'ultrason et d'un récepteur.
L'émetteur envoie des ondes ultrason en face de lui avec un angle de 15°.
Lorsque les ondes rencontreront un obstacles elles vont rebondir dessus et retourner vers le récepteur.
Le temps que l'onde met à revenir permet d'obtenir la distance à laquelle l'obstacle se trouve.
le capteur possède 4 pin :
* 1 +
* 1 Gnd
* 1 pin INput l'émetteur
* 1 pin OUTput du récépteur

## Principe de fonctionnement d'un haut-parleur
Un haut-parleur est un dispositif électronique qui traduit un signal électrique en mouvement mécanique.
Le haut parleur a besoin d'un signal alternatif, il donnera un son équivalent a la fréquence et a l'amplitude du courant reçus.
Ce signal lui est envoyé directement par le module mp3.
Le mouvement est crée grâce a un éléctro-aimant et une bobine. L'éléctro-aimant est solidaire d'une membrane. Lorsque la bobine est traversé par du courant, elle va a tour de role s'éloigné et se rapprocher. En bougeant la bobine va crée une pression acoustique dans l'air, ce qui se traduit en une onde sonore, un son.

## Principe de fonctionnement d'un moteur 9volt
Comme tout les moteurs, un moteur 9volt consiste a transformer une énergie(ici électrique) en énergie mécanique.
Grace au rotor et au stator, Cela produit un champ magnétique qui va entrainer la rotation.

## Principe d'une puce L298N
Une puce L298N contient 2pont en H, chacun permettant de controller un moteur et de les faire fonctionner séparément.
Ils utilisent des commandes logiques "basse puissance" ce qui permet de l'utiliser pour de l'arduino.
Les ponts fonctionnent grace a des broches d'activation(ENA,ENB)pour lancer et arréter les moteurs ainsi que varier la vitesse des moteurs
et des broches de sélections(IN1,IN2,IN3,IN4) pour sélectionner le sens de rotation des moteurs
Pour controler le sens de rotation des moteurs on va utilisé les transitors dans le pont en H 2 par 2 ce qui va entrainer un changement dans le sens du courant.
