#pragma once
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <cstring>
#include <list>
#include <iterator>
#include <vector>
#include <malloc.h>

static const int data[] = {
    540, 834, 815, 344, 898, 142, 433, 240, 459, 751, 823, 724, 764, 824, 933, 80, 435, 671, 652, 966, 359, 567, 468, 282, 603, 561, 39, 585, 880, 381, 158, 474, 205, 48, 907, 662, 466, 818, 560, 448, 338, 918, 771, 477, 629, 503, 94, 490, 218, 504, 695, 322, 901, 957, 840, 935, 102, 347, 936, 616, 105, 519, 564, 72, 991, 635, 805, 649, 987, 8, 750, 758, 171, 318, 789, 807, 33, 90, 275, 588, 482, 922, 808, 181, 867, 923, 230, 144, 900, 316, 675, 283, 604, 169, 341, 531, 888, 157, 836, 595, 21, 938, 738, 737, 740, 895, 780, 125, 436, 401, 360, 46, 648, 768, 693, 926, 761, 251, 220, 66, 210, 57, 916, 279, 496, 62, 878, 961, 729, 77, 999, 226, 313, 116, 613, 168, 373, 241, 939, 773, 324, 571, 529, 547, 820, 981, 234, 934, 845, 868, 330, 882, 910, 145, 429, 538, 929, 759, 702, 986, 767, 172, 137, 365, 53, 269, 753, 525, 700, 990, 591, 757, 993, 14, 563, 76, 488, 85, 641, 906, 406, 863, 717, 542, 507, 553, 875, 437, 548, 801, 950, 703, 658, 196, 307, 994, 883, 393, 976, 115, 58, 955, 184, 41, 728, 486, 626, 625, 65, 103, 337, 967, 446, 798, 530, 131, 306, 908, 162, 37, 460, 683, 174, 943, 777, 951, 89, 830, 130, 587, 310, 925, 19, 480, 665, 612, 514, 170, 323, 790, 954, 980, 208, 135, 705, 765, 505, 190, 732, 843, 478, 546, 152, 558, 353, 739, 545, 13, 297, 203, 47, 803, 581, 104, 303, 699, 100, 36, 854, 121, 842, 962, 363, 342, 832, 396, 149, 989, 590, 651, 394, 308, 491, 909, 498, 846, 319, 277, 50, 155, 639, 707, 723, 25, 628, 676, 509, 417, 984, 816, 775, 271, 493, 996, 828, 295, 874, 278, 382, 26, 148, 415, 853, 232, 56, 108, 412, 139, 261, 377, 928, 28, 252, 390, 499, 69, 972, 930, 748, 794, 416, 164, 623, 796, 544, 847, 40, 329, 423, 485, 375, 91, 372, 661, 134, 617, 107, 438, 378, 963, 182, 335, 861, 101, 45, 851, 607, 288, 889, 766, 385, 672, 221, 361, 586, 565, 177, 515, 688, 495, 970, 99, 937, 701, 201, 543, 110, 611, 133, 947, 774, 424, 858, 752, 682, 3, 573, 983, 782, 126, 942, 255, 811, 500, 258, 624, 409, 931, 312, 402, 63, 254, 817, 212, 680, 650, 248, 151, 86, 977, 911, 576, 712, 668, 919, 237, 601, 484, 408, 434, 366, 128, 893, 769, 198, 315, 400, 988, 215, 968, 522, 6, 551, 677, 219, 326, 755, 356, 194, 917, 392, 246, 9, 948, 292, 772, 262, 358, 427, 299, 124, 286, 22, 978, 946, 179, 71, 163, 391, 167, 606, 414, 927, 450, 193, 621, 791, 328, 892, 454, 487, 684, 979, 399, 266, 29, 749, 902, 726, 746, 896, 781, 669, 10, 541, 407, 614, 302, 272, 294, 245, 704, 516, 760, 117, 44, 249, 636, 537, 432, 657, 953, 156, 559, 716, 694, 747, 622, 79, 379, 483, 120, 741, 975, 242, 589, 528, 236, 502, 305, 445, 912, 579, 119, 806, 350, 730, 188, 146, 34, 113, 397, 195, 291, 138, 465, 829, 744, 837, 945, 458, 270, 881, 685, 785, 300, 550, 27, 403, 1, 844, 804, 689, 298, 2, 884, 539, 320, 59, 645, 88, 122, 314, 464, 997, 239, 380, 82, 165, 87, 692, 992, 244, 819, 214, 140, 32, 15, 471, 150, 24, 964, 549, 276, 593, 720, 870, 885, 985, 800, 605, 698, 439, 411, 81, 413, 869, 12, 367, 418, 289, 715, 92, 233, 877, 508, 725, 956, 686, 281, 114, 331, 718, 352, 597, 745, 345, 206, 513, 520, 960, 83, 856, 444, 779, 506, 783, 562, 944, 200, 852, 388, 442, 873, 974, 860, 340, 227, 309, 690, 524, 370, 532, 222, 64, 592, 211, 259, 743, 521, 920, 733, 814, 886, 386, 637, 425, 18, 143, 681, 422, 317, 98, 904, 673, 656, 224, 708, 501, 973, 620, 969, 879, 473, 949, 362, 431, 646, 876, 451, 913, 627, 633, 557, 247, 574, 118, 859, 354, 691, 756, 223, 109, 35, 296, 260, 598, 452, 533, 642, 469, 535, 795, 838, 197, 602, 42, 455, 754, 580, 96, 569, 364, 327, 555, 23, 180, 770, 284, 420, 784, 721, 554, 68, 7, 797, 722, 153, 865, 536, 667, 809, 54, 209, 55, 461, 713, 384, 339, 274, 199, 325, 599, 229, 456, 812, 827, 674, 398, 762, 899, 4, 217, 67, 572, 38, 30, 848, 905, 404, 638, 75, 891, 802, 734, 395, 792, 841, 727, 618, 43, 346, 31, 428, 600, 405, 511, 73, 894, 5, 453, 584, 311, 864, 343, 512, 334, 577, 264, 655, 552, 374, 862, 872, 778, 643, 839, 280, 93, 183, 267, 826, 941, 582, 850, 16, 706, 711, 615, 357, 897, 185, 849, 304, 187, 742, 556, 659, 467, 731, 263, 479, 998, 421, 810, 371, 449, 349, 914, 903, 687, 20, 787, 49, 566, 112, 462, 952, 238, 376, 813, 470, 243, 207, 640, 793, 287, 736, 231, 161, 463, 106, 253, 510, 178, 647, 189, 443, 159, 387, 890, 831, 570, 173, 855, 147, 192, 915, 619, 235, 355, 285, 583, 0, 333, 697, 497, 132, 336, 971, 833, 568, 60, 84, 250, 136, 213, 940, 679, 74, 575, 714, 166, 799, 857, 368, 489, 176, 11, 301, 921, 924, 441, 160, 204, 321, 776, 127, 871, 825, 594, 202, 735, 51, 578, 457, 419, 596, 123, 383, 256, 609, 763, 835, 293, 534, 786, 678, 481, 70, 290, 447, 959, 332, 369, 523, 709, 526, 17, 982, 95, 216, 492, 476, 440, 78, 634, 97, 887, 631, 821, 475, 191, 932, 788, 664, 608, 154, 666, 129, 630, 958, 518, 111, 141, 696, 410, 61, 610, 654, 822, 494, 430, 965, 348, 225, 670, 472, 660, 426, 653, 52, 995, 389, 265, 268, 351, 228, 186, 175, 719, 527, 257, 644, 866, 710, 517, 632, 663, 273
};

static const int size = sizeof(data)/sizeof(int);

template <typename T>
void print_arr(T t, int n){
    for (int i = 0; i < n; i++)
        std::cout << t[i] << "\n";
}

template <typename T>
void print_vector(std::vector<T> v){
    typename std::vector<T>::iterator iter = v.begin();
    for(; iter != v.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
}