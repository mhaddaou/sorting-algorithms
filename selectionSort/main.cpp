/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:09:28 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/03/18 00:22:42 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>

template <typename iter>
void selection_sort(iter begin, iter end){
    
    for (; begin != end; begin++){
        iter min = begin;
        for (iter ite = begin; ite != end ; ite++){
            if (*ite < *min)
                min = ite;
        }
        std::swap(*min, *begin);
    }    
}

int main (){
    std::list<int> lst;
    std::vector<int> vec;
    lst.push_back(22);
    lst.push_back(20); 
    lst.push_back(2); 
    lst.push_back(1); 
    lst.push_back(15); 
    lst.push_back(17); 
    lst.push_back(3);
    vec.push_back(100);
    vec.push_back(70); 
    vec.push_back(4); 
    vec.push_back(15); 
    vec.push_back(30); 
    vec.push_back(0); 
    vec.push_back(1);
    selection_sort(lst.begin(), lst.end());
    std::cout << " list " << std::endl;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++){
        std::cout << *it << " ";
    } 
    selection_sort(vec.begin(), vec.end());
    std::cout << std::endl << " vector " << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << " ";
    } 
}