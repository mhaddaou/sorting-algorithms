/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 05:46:50 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/03/21 05:56:08 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template <typename iter>
void bubbleSort(iter begin, iter end){
    bool swapped = true;

    while (swapped){
        swapped = false;
        for (iter i = begin; i != end - 1; i++){
            if (*i > *(i + 1)){
                std::swap(*i, *(i + 1));
                swapped = true;
            }
        }
        end--;
    }
}


int main (){
    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(8);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(4);
    vec.push_back(1);

    bubbleSort(vec.begin(), vec.end());
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << " ";
    }

}
